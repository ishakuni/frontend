[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./images/logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
      <div className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h1> (ReasonReact.stringToElement(message)) </h1>
      </div>
      <p className="App-intro">
        (ReasonReact.stringToElement("Content goes here"))
      </p>
    </div>
};
