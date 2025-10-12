// wwwroot/js/HomeCarousel.js
let state = null;

function clearAnimations(cards) {
    cards.forEach(c => {
        const f = c.querySelector('.progress-fill');
        if (!f) return;
        f.style.animation = 'none';
        void f.offsetWidth;            // force reflow to reset
        f.style.animation = '';
        c.classList.remove('active');
    });
}

export function initHomeCarousel() {
    if (state?.initialized) {
        console.log('[HomeCarousel] already initialized');
        return;
    }

    const cards = Array.from(document.querySelectorAll('.rectangle-row .card'));
    const hero = document.getElementById('hero');
    const overlay = document.querySelector('.hero-overlay');
    const heroTitle = document.getElementById('hero-title');
    const heroDesc = document.getElementById('hero-desc');
    const heroBtn = document.getElementById('hero-btn');

    if (!cards.length || !hero || !overlay || !heroTitle || !heroDesc || !heroBtn) {
        // Try again next frame if DOM not ready yet
        requestAnimationFrame(initHomeCarousel);
        return;
    }

    console.log('[HomeCarousel] init with', cards.length, 'cards');

    const css = getComputedStyle(document.documentElement);
    const duration = parseInt(css.getPropertyValue('--timer-ms')) || 5000;

    let index = 0;
    let currentFillEndHandler = null;

    function showOverlay() {
        hero.style.opacity = 1;
        overlay.style.opacity = 1;
    }

    function hideOverlay() {
        hero.style.opacity = 0;
        overlay.style.opacity = 0;
    }

    function setHeroFromCard(i) {
        const card = cards[i];
        if (!card) return;

        const src = card.querySelector('img')?.src || '';
        const title = card.dataset.title || card.getAttribute('title-text') || '';
        const desc = card.dataset.desc || card.dataset.descText || card.getAttribute('desc-text') || '';
        const link = card.dataset.link || card.getAttribute('link') || '#';

        // New variable names pulled from data-* or attributes with fallbacks
        const buttonText = card.dataset.buttonText || card.getAttribute('button-text') || 'View project';
        const buttonBackgroundColour =
            card.dataset.buttonBackgroundColour || card.getAttribute('button-background-colour') || '#efb2c4';
        const textColor =
            card.dataset.buttonTextColour || card.getAttribute('button-text-colour') || '#111';

        hideOverlay();

        const apply = () => {
            heroTitle.textContent = title;
            heroDesc.textContent = desc;

            heroBtn.href = link || '#';
            heroBtn.textContent = buttonText;
            heroBtn.style.setProperty('background-color', buttonBackgroundColour, 'important');
            heroBtn.style.setProperty('color', textColor, 'important');
            heroBtn.setAttribute('aria-label', `${buttonText}: ${title}`);
            heroBtn.style.display = link && link !== '#' ? 'inline-block' : 'none';

            // apply same text color to hero title + description
            heroTitle.style.color = textColor;
            heroDesc.style.color = textColor;

            showOverlay();
        };

        if (hero.src === src) {
            // If same image, just apply immediately on next frame
            requestAnimationFrame(apply);
            return;
        }

        // Handle cached images where onload won’t fire
        hero.onload = apply;
        hero.src = src;
        if (hero.complete) {
            hero.onload = null;
            apply();
        }
    }

    function clearHandlers() {
        if (currentFillEndHandler?.fill) {
            currentFillEndHandler.fill.removeEventListener('animationend', currentFillEndHandler.fn);
            currentFillEndHandler = null;
        }
    }

    function activate(i) {
        clearAnimations(cards);
        clearHandlers();

        const card = cards[i];
        const fill = card.querySelector('.progress-fill');
        card.classList.add('active');
        setHeroFromCard(i);

        if (fill) {
            fill.style.animation = `load ${duration}ms linear forwards`;
            const onEnd = () => {
                currentFillEndHandler = null;
                index = (i + 1) % cards.length;
                activate(index);
            };
            currentFillEndHandler = { fill, fn: onEnd };
            fill.addEventListener('animationend', onEnd, { once: true });
        }
    }

    // Quick first paint: seed hero with first card’s image
    const firstImg = cards[0].querySelector('img');
    if (firstImg?.src) {
        hero.src = firstImg.src;
        if (hero.complete) {
            showOverlay();
        } else {
            hero.onload = showOverlay;
        }
    }

    // Hover pause & click jump
    const listeners = [];
    cards.forEach((card) => {
        const fill = card.querySelector('.progress-fill');

        const onEnter = () => { if (fill?.style.animation) fill.style.animationPlayState = 'paused'; };
        const onLeave = () => { if (fill?.style.animation) fill.style.animationPlayState = 'running'; };
        const onClick = () => { index = cards.indexOf(card); activate(index); };

        card.addEventListener('mouseenter', onEnter);
        card.addEventListener('mouseleave', onLeave);
        card.addEventListener('click', onClick);

        listeners.push([card, 'mouseenter', onEnter], [card, 'mouseleave', onLeave], [card, 'click', onClick]);
    });

    // Start the cycle
    activate(index);

    state = {
        initialized: true,
        cards,
        listeners,
        dispose: () => {
            clearHandlers();
            clearAnimations(cards);
            listeners.forEach(([el, type, fn]) => el.removeEventListener(type, fn));
            state = null;
        }
    };
}

export function disposeHomeCarousel() {
    if (state?.dispose) state.dispose();
}
