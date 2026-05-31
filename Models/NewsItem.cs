using System.Collections.Generic;

namespace KenyonDevLabs.Models
{
    public static class NewsCategories
    {
        public const string PatchNote = "Patch Note";
        public const string Social = "Social";
        public const string Other = "Other";

        public static readonly IReadOnlyList<string> All = new[] { PatchNote, Social, Other };
    }

    public class NewsItem
    {
        public string Id { get; set; } = "";
        public string Title { get; set; } = "";
        public DateTime Date { get; set; }
        public string TopColour { get; set; } = "";
        public string BottomColour { get; set; } = "";
        public string DateTextColour { get; set; } = "";
        public string Summary { get; set; } = "";
        public string IconUrl { get; set; } = "";
        public string Category { get; set; } = "";
        public List<string> Tags { get; set; } = new();
        public string ImageUrl { get; set; } = "#";
    }
}
