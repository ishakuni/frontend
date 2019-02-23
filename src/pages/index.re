let component = ReasonReact.statelessComponent("index");

let container = Css.(style([textAlign(center)]));
let moveDown = Css.(style([marginTop @@ em(2.)]));

let make = _ => {
  ...component,
  render: _ =>
    <main className=container>
      <div className=moveDown> <Logo /> </div>
      <H1> {ReasonReact.string("Fantasy bets")} </H1>
      <Text text="Content goes here" />
      <Footer />
    </main>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
