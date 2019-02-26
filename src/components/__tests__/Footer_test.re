open Jest;

open JestDom;

open ReactTestingLibrary;

describe("Footer", () => {
  test("shows attribution", () =>
    <Footer />
    |> render
    |> getByText(~matcher=`RegExp(Js.Re.fromString("Built with love")))
    |> expect
    |> toBeInTheDocument
  );
  test("renders an author link", () => {
    let source =
      <Footer /> |> render |> getByText(~matcher=`Str("@caulagi"));
    source
    ->expect
    ->(toHaveAttributeWithValue("href", "//twitter.com/@caulagi"));
  });
});
