window.initDevCarousel = function (carouselId) {
    const carousel = document.getElementById(carouselId);
    if (!carousel || carousel.dataset.carouselReady === "1") return;

    const track = carousel.querySelector(".dev-carousel-track");
    const dots = Array.from(carousel.querySelectorAll(".dev-carousel-dot"));
    const cards = Array.from(track?.querySelectorAll(".dev-card") || []);
    if (!track || !cards.length || !dots.length) return;

    carousel.dataset.carouselReady = "1";

    const setActive = (index) => {
        const safeIndex = Math.max(0, Math.min(index, cards.length - 1));
        dots.forEach((dot, i) => {
            const active = i === safeIndex;
            dot.classList.toggle("active", active);
            dot.setAttribute("aria-selected", active ? "true" : "false");
        });
    };

    const updateFromScroll = () => {
        const trackRect = track.getBoundingClientRect();
        const trackCenter = trackRect.left + trackRect.width / 2;
        let closestIndex = 0;
        let closestDistance = Number.POSITIVE_INFINITY;

        cards.forEach((card, i) => {
            const rect = card.getBoundingClientRect();
            const cardCenter = rect.left + rect.width / 2;
            const distance = Math.abs(cardCenter - trackCenter);
            if (distance < closestDistance) {
                closestDistance = distance;
                closestIndex = i;
            }
        });

        setActive(closestIndex);
    };

    let ticking = false;
    track.addEventListener("scroll", () => {
        if (ticking) return;
        ticking = true;
        requestAnimationFrame(() => {
            updateFromScroll();
            ticking = false;
        });
    }, { passive: true });

    dots.forEach((dot, i) => {
        dot.addEventListener("click", () => {
            const card = cards[i];
            if (!card) return;

            track.scrollTo({ left: card.offsetLeft, behavior: "smooth" });
            setActive(i);
        });
    });

    updateFromScroll();
};

window.initSkillsChart = function () {
    var ctx = document.getElementById("skillsChart")?.getContext("2d");
    if (!ctx) {
        console.error("Canvas element not found!");
        return;
    }

    new Chart(ctx, {
        type: "doughnut",
        data: {
            labels: ["Castle Climbers", "Girls Who Connect", "Bucket Connect"],
            datasets: [{
                data: [184, 68, 154], // Percentage values
                backgroundColor: ["#911F1F", "#F8846A", "#44D9C7"]
            }]
        },
        options: {
            responsive: true,
            maintainAspectRatio: false,
            cutout: "50%", // Controls the size of the inner hole
            plugins: {
                legend: {
                    display: false
                },
                tooltip: {
                    enabled: true
                }
            }
        },
        plugins: [
            {
                id: "centerText",
                beforeDraw: function (chart) {
                    var width = chart.width,
                        height = chart.height,
                        ctx = chart.ctx;

                    ctx.restore();
                    var fontSize = (height / 10).toFixed(2); // Adjust text size
                    ctx.font = fontSize + "px sans-serif";
                    ctx.textBaseline = "middle";
                    ctx.textAlign = "center";

                    var text = "406",
                        textX = width / 2,
                        textY = height / 2;

                    ctx.fillStyle = "#000"; // Text color
                    ctx.fillText(text, textX, textY);
                    ctx.save();
                }
            }
        ]
    });
};
