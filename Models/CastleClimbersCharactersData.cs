public class CCPageData
{
    public List<CCGroup> Groups { get; set; } = new();
}

public class CCGroup
{
    public string Group { get; set; } = "";
    public List<CCCard> Cards { get; set; } = new();
}

public class CCCard
{
    public string Tl { get; set; } = "";
    public string Tr { get; set; } = "";
    public string Image { get; set; } = "";
    public string ImageAlt { get; set; } = "";
    public string Background { get; set; } = "";        // per-card
    public string Outline { get; set; } = "#ffffff22";  // per-card (color)
    public string TextColor { get; set; } = "#ffffff";  // per-card (text colour)

    public bool IsCoins { get; set; } = false;          // true if price uses coins
    public int Price { get; set; } = 0;                 // price value
}
