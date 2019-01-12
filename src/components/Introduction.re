open Css;

let component = ReasonReact.statelessComponent("App");

let outer = style([textAlign(`center)]);

let logo = style([height @@ px(80), marginTop @@ px(100)]);

let header = style([padding @@ px(20)]);

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className=outer>
      <div className=header> <h1> {ReasonReact.string(message)} </h1> </div>
      <p> {ReasonReact.string("Content goes here")} </p>
    </div>,
};
