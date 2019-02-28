let component = ReasonReact.statelessComponent("SEO");

let make = (~title, ~description, children) => {
  ...component,
  render: _ =>
    <BsReactHelmet title>
      <html lang="en" />
      <meta name="description" content=description />
      <meta property="og:url" content="https://ishakuni.com/" />
      <meta
        property="og:image"
        content="https://ishakuni.com/icons/icon-512x512.png"
      />
      <meta name="og:title" content=title />
      <meta name="og:description" content=description />
      <meta name="twitter:card" content="summary" />
      <meta name="twitter:title" content=title />
      <meta name="twitter:description" content=description />
      <meta
        name="twitter:image"
        content="https://ishakuni.com/icons/icon-512x512.png"
      />
    </BsReactHelmet>,
};
