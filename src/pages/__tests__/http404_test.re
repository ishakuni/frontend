open Jest;
open Expect;
open ReactTestingLibrary;

[@bs.get] external textContent: Dom.element => string;

describe("404 page", () => {
  let el = <Http404 />;

  test("renders with a exclamation", () =>
    el
    |> render
    |> getByText(~matcher=`Str("404!"))
    |> expect
    |> toMatchSnapshot
  );

  test("renders with a message", () =>
    el
    |> render
    |> getAllByText(
         ~matcher=
           `Func(
             (_text, el) =>
               el |> textContent === "Oops...that page doesn't exist!",
           ),
       )
    |> expect
    |> toMatchSnapshot
  );

  test("renders logo", () =>
    el
    |> render
    |> queryAllByTitle(~matcher=`Str("logo"))
    |> expect
    |> toMatchSnapshot
  );
});
