open Jest;
open JestDom;
open ReactTestingLibrary;

describe("App on default load", () =>
  test("shows project tagline", () => {
    let message = "Fantasy bets";
    <App message />
    |> render
    |> getByText(~matcher=`Str(message))
    |> expect
    |> toBeInTheDocument;
  })
);
