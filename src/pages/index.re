let component = ReasonReact.statelessComponent("index");

let container = Css.(style([textAlign(center)]));
let moveDown = Css.(style([marginTop @@ em(2.)]));
let title = "iShakuni | Fantasy bets"
let description = "iShakuni is a fun platform to bet on sports events with friends using fictional money"

let make = _ => {
  ...component,
  render: _ =>
    <main className=container>
      <BsReactHelmet title=title>
        <html lang="en" />
        <meta name="description" content=description />
        <meta property="og:url" content="https://ishakuni.com/" />
        <meta property="og:image" content="https://ishakuni.com/icons/icon-512x512.png" />
        <meta name="og:title" content=title />
        <meta name="og:description" content=description />
      </BsReactHelmet>
      <div className=moveDown> <Logo /> </div>
      <H1> {ReasonReact.string("Fantasy bets")} </H1>
      <Text text="Content goes here" />
      <Footer />
    </main>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
