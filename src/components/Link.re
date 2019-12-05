let styles =
  Css.(
    style([
      color @@ hex("8b008b"),
      textDecoration(none),
      transitionDuration(500),
      hover([color @@ hex("8b0000")]),
    ])
  );

let cn = cns => cns->Belt.List.keep(x => x !== "")->String.concat(" ", _);

[@react.component]
let make = (~className="", ~href, ~title="", ~children) => {
  <a
    className={cn([styles, className])}
    href
    rel="noopener noreferrer"
    target="_blank"
    title>
    children
  </a>;
};

let default = make;
