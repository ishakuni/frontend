open Css;

let component = ReasonReact.statelessComponent("Footer");

let footer = style([
  fontSize @@ em(1.4),
  marginTop @@ em(5.0),
  textAlign(center),
]);

let make = _children => {
  ...component,
  render: _self =>
    <div className=footer>
      {ReasonReact.string("Built with love by Pradip Caulagi")}
    </div>,
};
