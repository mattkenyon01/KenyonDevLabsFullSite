using Microsoft.Extensions.Diagnostics.HealthChecks;
using System;
using System.Collections.Generic;

namespace KenyonDevLabs.Models
{
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
        public List<string> Tags { get; set; } = new();
        public string ImageUrl { get; set; } = "#";
    }
}
