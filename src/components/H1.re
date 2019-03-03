let component = ReasonReact.statelessComponent("H1");

let styles = Css.[fontSize @@ em(2.0), fontFamily("Roboto, san-serif")];

let make = (~className=Css.empty, children) => {
  ...component,
  render: _ =>
    <h1 className={Css.style(styles @ className)}>
      <Fragment> ...children </Fragment>
    </h1>,
};
