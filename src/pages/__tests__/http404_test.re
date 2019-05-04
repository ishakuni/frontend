open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

[@bs.get] external textContent: Dom.element => string = "";

describe("404 page", () => {
  test("renders with a exclamation", () =>
    <Http404 />
    |> render
    |> getByText(~matcher=`Str("404!"))
    |> expect
    |> toBeInTheDocument
  );

  test("renders with a message", () =>
    <Http404 />
    |> render
    |> getByText(
         ~matcher=
           `Func(
             (_text, el) =>
               el |> textContent === "Oops...that page doesn't exist!",
           ),
       )
    |> expect
    |> toBeInTheDocument
  );

  test("renders logo", () =>
    <Http404 /> |> render |> getByTitle("logo") |> expect |> toBeInTheDocument
  );

  test("exports default component", () => {
    module Default = {
      let make = _ =>
        ReasonReact.wrapJsForReason(
          ~reactClass=Http404.default,
          ~props=Js.Obj.empty(),
          [||],
        );
    };

    <Default /> |> render |> container |> expect |> toBeInTheDocument;
  });
});
