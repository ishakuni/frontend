open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

describe("<Link />", () => {
  let href = "//site.local/test";

  test("renders", () =>
    (
      <Link href> {ReasonReact.string("A link")} </Link>
      |> render
      |> getByText(~matcher=`Str("A link"))
    )
    ->Some
    |> expect
    |> toBeInTheDocument
  );

  test("renders as a link", () =>
    (
      <Link href> {ReasonReact.string("A link")} </Link>
      |> render
      |> getByText(~matcher=`Str("A link"))
    )
    ->Some
    |> expect
    |> toHaveAttribute("href", ~value=href)
  );

  test("renders with className", () =>
    (
      <Link className=Css.[color(rebeccapurple)] href>
        {ReasonReact.string("A link")}
      </Link>
      |> render
      |> getByText(~matcher=`Str("A link"))
    )
    ->Some
    |> expect
    |> toHaveClass("css-6oydka")
  );

  test("renders with title", () =>
    (
      <Link href title="Test"> {ReasonReact.string("A link")} </Link>
      |> render
      |> getByTitle("Test")
    )
    ->Some
    |> expect
    |> toBeInTheDocument
  );
});
