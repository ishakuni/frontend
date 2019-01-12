open Jest;
open JestDom;
open ReactTestingLibrary;

describe("Index page", () =>
  test("renders", () =>
    <Index /> |> render |> container |> expect |> toBeInTheDocument
  )
);
