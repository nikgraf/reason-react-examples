[@bs.config {jsx: 3}];

let handleClick = _event => Js.log("clicked!");

[@react.component]
let make = () => <div onClick=handleClick> {React.string("Click me")} </div>;
