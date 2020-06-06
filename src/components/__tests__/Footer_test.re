open Jest;
open Expect;
open ReactTestingLibrary;

describe("Footer", () => {
  test("shows attribution", () =>
    <Footer />
    |> render
    |> getAllByText(~matcher=`RegExp(Js.Re.fromString("Built with love")))
    |> expect
    |> toMatchSnapshot
  );
  test("renders an author link", () => {
    let source =
      <Footer /> |> render |> getAllByText(~matcher=`Str("@caulagi"));
    source |> expect |> toMatchSnapshot;
  });
});
