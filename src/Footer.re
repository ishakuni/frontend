[%bs.raw {|require('./Footer.css')|}];

let component = ReasonReact.statelessComponent("Footer");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="Footer">
      (ReasonReact.string("Built with love by Pradip Caulagi"))
    </div>
};
