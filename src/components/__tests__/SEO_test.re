open Jest;
open Expect;

describe("SEO", () =>
  test("renders with proper meta tags", () => {
    let tree =
      <SEO title="title" description="desc" />
      |> ReactShallowRenderer.renderWithRenderer;

    expect(tree) |> toMatchSnapshot;
  })
);
