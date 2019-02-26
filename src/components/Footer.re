open Css;

let component = ReasonReact.statelessComponent("Footer");

let footer = style([marginTop @@ em(5.0), textAlign(center)]);

let make = _children => {
  ...component,
  render: _self =>
    <div className=footer>
      <Text text="Built with love by " />
      <Link href="//twitter.com/@caulagi"> <Text text="@caulagi" /> </Link>
    </div>,
};
