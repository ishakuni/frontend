/* [@bs.module] external logo: string = "./images/logo.svg"; */
open Css;

let component = ReasonReact.statelessComponent("App");

let outer = style([
    textAlign(`center),
  ]);

let logo = style([
    height @@ px(80),
    marginTop @@ px(100),
  ]);

let intro = style([
    /* fontSize(`larger), */
  ]);

let header = style([
    padding @@ px(20),
  ]);

/* .App-logo { */
/*   animation: App-logo-spin infinite 20s linear; */
/* } */
/* @keyframes App-logo-spin { */
/*   from { transform: rotate(0deg); } */
/*   to { transform: rotate(360deg); } */
/* } */


let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className=outer>
      <div className=header>
        <img src=logo className=logo alt="logo" />
        <h1> {ReasonReact.string(message)} </h1>
      </div>
      <p className=intro> {ReasonReact.string("Content goes here")} </p>
    </div>,
};
