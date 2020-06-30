open Jest;
open Expect;

open ReactTestingLibrary;

describe("SEO", () =>
  test("renders with proper meta tags", () => {
    <SEO title="title" description="desc" />
    |> render
    |> expect
    |> toMatchSnapshot
  })
);
