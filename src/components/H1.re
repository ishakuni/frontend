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

module Jsx2 = {
  let component = ReasonReact.statelessComponent("H1");
  /* `children` is not labelled, as it is a regular parameter in version 2 of JSX */
  let make = (~className=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~className?, ~children, ()),
      children,
    );
  };
};
