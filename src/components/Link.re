let styles =
  Css.[
    color @@ hex("8b008b"),
    textDecoration(none),
    transitionDuration(500),
    hover([color @@ hex("8b0000")]),
  ];

[@react.component]
let make = (~className=Css.empty, ~href, ~title="", ~children) => {
  <a
    className={styles->Css.style}
    href
    rel="noopener noreferrer"
    target="_blank"
    title>
    children
  </a>;
};

let default = make;
