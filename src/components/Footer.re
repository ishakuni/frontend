let footer = Css.(style([marginTop @@ em(5.0), textAlign(center)]));

[@react.component]
let make = () => {
  <div className=footer>
    <Text text="Built with love by " />
    <Link href="//twitter.com/caulagi"> <Text text="@caulagi" /> </Link>
  </div>;
};

let default = make;
