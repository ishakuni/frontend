let component = ReasonReact.statelessComponent("index");

let make = ( _ ) => {
  ...component,
  render: (_) =>
    <main>
      <Introduction message="fantasy bets" />
      <Footer />
    </main>
};

let default = ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
