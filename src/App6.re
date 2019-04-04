[@bs.config {jsx: 3}];

[@react.component]
let make = () => {
  let (time, setTime) = React.useState(() => 0);

  React.useEffect0(() => {
    let timerId =
      Js.Global.setInterval(() => setTime(time => time + 1), 1000);
    Some(() => Js.Global.clearInterval(timerId));
  });

  <div>
    <p> {React.string("Seconds passed " ++ string_of_int(time))} </p>
  </div>;
};
