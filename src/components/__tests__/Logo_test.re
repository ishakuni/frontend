open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

describe("<Logo />", () =>
  test("renders", () =>
    <Logo /> |> render |> container |> expect |> toBeInTheDocument
  )
);
