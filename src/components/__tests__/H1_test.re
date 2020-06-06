open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

describe("<H1 />", () => {
  test("renders", () =>
    <H1> {ReasonReact.string("Heading")} </H1>
    |> render
    |> getByText(~matcher=`Str("Heading"))
    |> expect
    |> toMatchSnapshot
  );

  test("renders with className", () =>
    <H1 className=Css.(style([color(rebeccapurple)]))>
      {ReasonReact.string("Heading")}
    </H1>
    |> render
    |> getAllByText(~matcher=`Str("Heading"))
    |> expect
    |> toMatchSnapshot
  );
});
