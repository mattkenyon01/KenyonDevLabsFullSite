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

        // cache per file
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
            // 1) if caller wants cache and we have it, return it
            if (useCache && _cache.TryGetValue(file, out var cached))
                return cached;

            // 2) otherwise fetch fresh, with a cache-buster so the browser/service worker
            // doesn't hand us an old file
            var url = $"data/{file}?v={DateTime.UtcNow.Ticks}";

            try
            {
                var items = await _http.GetFromJsonAsync<List<NewsItem>>(url, _json)
                            ?? new List<NewsItem>();

                // store in cache for next time
                _cache[file] = items;
                return items;
            }
            catch
            {
                return new List<NewsItem>();
            }
        }

        public async Task<IReadOnlyList<NewsItem>> GetAllAsync(bool useCache = true)
        {
            var allItems = new List<NewsItem>();

            var files = new[]
            {
                "CastleClimbersPatchNotes.json",
                "GirlsWhoConnectPatchNotes.json",
                "BucketConnectPatchNotes.json",
                "IgnorionPatchNotes.json"
            };

            foreach (var file in files)
            {
                // pass through the useCache flag
                var items = await GetNewsAsync(file, useCache);
                allItems.AddRange(items);
            }

            return allItems;
        }

        // 👉 extra helper if you want a button to force-clear
        public void ClearCache(string? file = null)
        {
            if (file is null)
                _cache.Clear();
            else
                _cache.Remove(file);
        }
    }
}
