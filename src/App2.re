[@bs.config {jsx: 3}];

[@react.component]
let make = () => {
  let (count, setCount) = React.useState(() => 0);

  <div>
    <p> {React.string("Clicked " ++ string_of_int(count) ++ " times")} </p>
    <button onClick={_event => setCount(count => count + 1)}>
      {React.string("Click me")}
    </button>
  </div>;
};
