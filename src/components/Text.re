[@react.component]
let make = (~text) => {
  text |> React.string;
                      /* ReasonReact.string(text); */
};

let default = make;
