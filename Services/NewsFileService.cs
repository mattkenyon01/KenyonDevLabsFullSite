using System.Net.Http;
using System.Net.Http.Json;
using System.Text.Json;
using KenyonDevLabs.Models;

namespace KenyonDevLabs.Services
{
    public class NewsFileService
    {
        private readonly HttpClient _http;
        private readonly JsonSerializerOptions _json = new() { PropertyNameCaseInsensitive = true };

        // ✅ Cache per file name instead of a single list
        private readonly Dictionary<string, List<NewsItem>> _cache
            = new(StringComparer.OrdinalIgnoreCase);

        public NewsFileService(HttpClient http)
        {
            _http = http;
        }

        public async Task<IReadOnlyList<NewsItem>> GetNewsAsync(
            string file = "CastleClimbersPatchNotes.json",
            bool useCache = true)
        {
            if (useCache && _cache.TryGetValue(file, out var cached))
                return cached;

            try
            {
                // Loads from wwwroot/data/
                var items = await _http.GetFromJsonAsync<List<NewsItem>>($"data/{file}", _json)
                            ?? new List<NewsItem>();

                _cache[file] = items;
                return items;
            }
            catch
            {
                // If file not found or error
                return new List<NewsItem>();
            }
        }

        // 🔹 Load and merge all news files
        public async Task<IReadOnlyList<NewsItem>> GetAllAsync(bool useCache = true)
        {
            var allItems = new List<NewsItem>();

            var files = new[]
            {
                "CastleClimbersPatchNotes.json",
                "GirlsWhoWalkPatchNotes.json",
                "BucketConnectPatchNotes.json"
            };

            foreach (var file in files)
            {
                var items = await GetNewsAsync(file, useCache);
                allItems.AddRange(items);
            }

            return allItems;
        }
    }
}
