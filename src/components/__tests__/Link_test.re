open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

describe("<Link />", () => {
  let href = "//site.local/test";

  test("renders", () =>
    <Link href> {ReasonReact.string("A link")} </Link>
    |> render
    |> getByText(~matcher=`Str("A link"))
    |> expect
    |> toBeInTheDocument
  );

  test("renders as a link", () =>
    <Link href> {ReasonReact.string("A link")} </Link>
    |> render
    |> getByText(~matcher=`Str("A link"))
    |> expect
    |> toHaveAttribute("href", ~value=href)
  );

  test("renders with className", () =>
    <Link className={Css.style([Css.color(Css.rebeccapurple)])} href>
      {ReasonReact.string("A link")}
    </Link>
    |> render
    |> getByText(~matcher=`Str("A link"))
    |> expect
    |> toHaveClass("css-4txxhf css-1pm6ghi")
  );

  test("renders with title", () =>
    <Link href title="Test"> {ReasonReact.string("A link")} </Link>
    |> render
    |> getByTitle("Test")
    |> expect
    |> toBeInTheDocument
  );
});
