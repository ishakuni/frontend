open Jest;
open JestDom;
open ReactTestingLibrary;

describe("<Logo />", () =>
  test("renders", () =>
    <Logo /> |> render |> container |> expect |> toBeInTheDocument
  )
);
