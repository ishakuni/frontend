open Jest;
open Expect;
open ReactTestingLibrary;

describe("<Text />", () =>
  test("renders", () =>
    <Text text="text" /> |> render |> container |> expect |> toMatchSnapshot
  )
);
