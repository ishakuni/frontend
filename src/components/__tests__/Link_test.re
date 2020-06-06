open Jest;
open JestDom;
open Expect;
open ReactTestingLibrary;

describe("<Link />", () => {
  let href = "//site.local/test";

  test("renders as a link", () =>
    <Link href> {ReasonReact.string("A link")} </Link>
    |> render
    |> getByText(~matcher=`Str("A link"))
    |> expect
    |> toMatchSnapshot
  );

  test("renders with className", () =>
    <Link className={Css.style([Css.color(Css.rebeccapurple)])} href>
      {ReasonReact.string("A link")}
    </Link>
    |> render
    |> getAllByText(~matcher=`Str("A link"))
    |> expect
    |> toMatchSnapshot
  );

  test("renders with title", () =>
    <Link href title="Test"> {ReasonReact.string("A link")} </Link>
    |> render
    |> getByTitle(~matcher=`Str("Test"))
    |> expect
    |> toMatchSnapshot
  );
});
