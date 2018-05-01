[%bs.raw {|require('./Footer.css')|}];

let component = ReasonReact.statelessComponent("Footer");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="Footer">
      <p>
        (ReasonReact.stringToElement("Built with love by Pradip Caulagi"))
      </p>
      <p>
        <a> {ReasonReact.stringToElement("Credits")} </a>
      </p>
    </div>
};
