open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

describe("Footer", () => {
  test("shows attribution", () =>
    (
      <Footer />
      |> render
      |> getByText(~matcher=`RegExp(Js.Re.fromString("Built with love")))
    )
    ->Some
    |> expect
    |> toBeInTheDocument
  );
  test("renders an author link", () => {
    let source =
      (<Footer /> |> render |> getByText(~matcher=`Str("@caulagi")))->Some;
    source
    |> expect
    |> toHaveAttribute("href", ~value="//twitter.com/@caulagi");
  });
});
