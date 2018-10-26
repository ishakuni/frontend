open Jest;
open JestDom;
open ReactTestingLibrary;

describe("Footer", () => {

  test("shows attribution", () => {
    <Footer />
    |> render
    |> getByText(~matcher=`RegExp(Js.Re.fromString("Built with love")))
    |> expect
    |> toBeInTheDocument
  });
});
