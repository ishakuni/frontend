[%bs.raw {|require('./Footer.css')|}];

let component = ReasonReact.statelessComponent("Footer");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="Footer">
      <p>
        (ReasonReact.string("Built with love by Pradip Caulagi"))
      </p>
      <p>
        <a> {ReasonReact.string("Credits")} </a>
      </p>
    </div>
};
