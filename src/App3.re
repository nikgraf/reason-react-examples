[@bs.config {jsx: 3}];

type action =
  | Increment
  | Reset;

[@react.component]
let make = () => {
  let (state, send) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | Increment => state + 1
        | Reset => 0
        },
      0,
    );

  <div>
    <p> {React.string("Counter:  " ++ string_of_int(state))} </p>
    <button onClick={_event => send(Increment)}>
      {React.string("Increment")}
    </button>
    <button onClick={_event => send(Reset)}>
      {React.string("Reset")}
    </button>
  </div>;
};
