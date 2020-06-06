open Jest;
open Expect;
open ReactTestingLibrary;

describe("<Logo />", () =>
  test("renders", () =>
    <Logo /> |> render |> container |> expect |> toMatchSnapshot
  )
);
