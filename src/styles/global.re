open Css;

global("html,body,p,h1,h2,h3", [margin(zero), padding(zero)]);

global("h1,h2,h3", [fontSize @@ pct(100.)]);

global("html", [boxSizing(borderBox)]);

global("*,*:after,*:before", [unsafe("boxSizing", "inherit")]);

global("img", [height(auto), maxWidth @@ pct(100.)]);

global("html,body", [height @@ pct(100.)]);

global(
  "html",
  [
    unsafe("MozOsxFontSmoothing", "grayscale"),
    unsafe("WebkitFontSmoothing", "antialiased"),
    unsafe("WebkitOverflowScrolling", "touch"),
    lineHeight @@ `abs(1.45),
    overflowX(hidden),
    unsafe("textRendering", "optimizeLegibility"),
  ],
);

global(
  "body",
  [
    color(rgb(34, 43, 47)),
    fontSize @@ Calc.(px(14) + vw(0.4)),
    fontFamilies([`custom("Lato"), `custom("Roboto"), `sansSerif]),
  ],
);
