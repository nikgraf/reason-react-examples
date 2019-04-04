[@bs.config {jsx: 3}];

type state = {count: int};
type action =
  | Increment(int)
  | Reset;

[@react.component]
let make = () => {
  let (state, send) =
    React.useReducer(
      (currentState, action) =>
        switch (action) {
        | Increment(amount) => {count: currentState.count + amount}
        | Reset => {count: 0}
        },
      {count: 0},
    );

  <div>
    <p> {React.string("Counter:  " ++ string_of_int(state.count))} </p>
    <button onClick={_event => send(Increment(1))}>
      {React.string("Increment 1")}
    </button>
    <button onClick={_event => send(Increment(2))}>
      {React.string("Increment 2")}
    </button>
    <button onClick={_event => send(Reset)}>
      {React.string("Reset")}
    </button>
  </div>;
};
