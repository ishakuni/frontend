open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

describe("Index page", () =>
  test("renders", () =>
    (<Index /> |> render |> container)->Some |> expect |> toBeInTheDocument
  )
);
