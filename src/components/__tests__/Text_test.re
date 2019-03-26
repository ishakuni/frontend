open Jest;
open Expect;
open JestDom;
open ReactTestingLibrary;

describe("<Text />", () =>
  test("renders", () =>
    (<Text text="text" /> |> render |> container)->Some
    |> expect
    |> toHaveTextContent("text")
  )
);
