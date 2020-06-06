open Jest;
open Expect;
open ReactTestingLibrary;

describe("Index page", () =>
  test("renders", () =>
    <Index /> |> render |> container |> expect |> toMatchSnapshot
  )
);
