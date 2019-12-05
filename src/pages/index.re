let container = Css.(style([textAlign(center)]));
let moveDown = Css.(style([marginTop @@ em(2.)]));

[@react.component]
let make = () => {
  <main className=container>
    <SEO
      title="iShakuni | Fantasy bets"
      description="iShakuni is a fun platform to bet on sports events with friends using fictional money"
    />
    <div className=moveDown> <Logo /> </div>
    <H1> {ReasonReact.string("Fantasy bets")} </H1>
    <Text text="Content goes here" />
    <Footer />
  </main>;
};

let default = make;

module Jsx2 = {
  let component = ReasonReact.statelessComponent("index");
  /* `children` is not labelled, as it is a regular parameter in version 2 of JSX */
  let make = children =>
    ReasonReactCompat.wrapReactForReasonReact(make, makeProps(), children);
};
