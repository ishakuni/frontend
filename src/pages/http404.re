let component = ReasonReact.statelessComponent("404");

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

let make = _ => {
  ...component,
  render: _ =>
    <div className=styles##container>
      <Logo />
      <H1> <Text text="404!" /> </H1>
      <div> <Text text="Oops...that page doesn't exist!" /> </div>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _ => make([||]));
