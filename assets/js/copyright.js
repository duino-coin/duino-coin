document.querySelectorAll(".copyright-year").forEach(el => {
    el.textContent = new Date().getFullYear();
});