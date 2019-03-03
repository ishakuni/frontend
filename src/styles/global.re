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
    color @@ hsl(200, 16, 16),
    fontSize @@ Calc.(px(16) + vw(0.4)),
    fontFamily("Lato, Roboto, san-serif"),
  ],
);
