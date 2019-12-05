[@react.component]
let make = (~text) => {
  text |> React.string;
};

let default = make;
