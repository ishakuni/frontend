let styles =
  Css.{
    "container":
      style([
        alignContent(`center),
        display(`grid),
        height @@ vh(80.),
        justifyContent(`center),
        unsafe("justifyItems", "center"),
        textAlign(`center),
      ]),
  };

[@react.component]
let make = () => {
  <div className=styles##container>
    <Logo />
    <H1> <Text text="404!" /> </H1>
    <div> <Text text="Oops...that page doesn't exist!" /> </div>
  </div>;
};

let default = make;

module Jsx2 = {
  let component = ReasonReact.statelessComponent("404");
  /* `children` is not labelled, as it is a regular parameter in version 2 of JSX */
  let make = () =>
    ReasonReactCompat.wrapReactForReasonReact(make, makeProps(), ());
};
