let styles =
  Css.(
    style([
      fontSize @@ em(2.0),
      fontFamilies([`custom("Roboto"), `sansSerif]),
    ])
  );

let cn = cns => cns->Belt.List.keep(x => x !== "")->String.concat(" ", _);

[@react.component]
let make = (~className="", ~children) => {
  <h1 className={cn([styles, className])}> children </h1>;
};

let default = make;
