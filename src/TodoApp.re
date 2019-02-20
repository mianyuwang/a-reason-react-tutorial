type item = {
  title: string,
  complete: bool
};

type state = {
  /* this is a type w/ a type argument,
  * similar to List<Item> in TypeScript,
  * Flow, or Java */
  items: list(item)
};

let component = ReasonReact.reducerComponent("TodoApp");
let element = ReasonReact.string;

let newItem = () => {
  title: "Click a button", complete: true
};

let make = _children => {
  ...component,
  initialState: () => {
    items: [
      {title: "Write some things to do", complete: false}
    ]
  },
  reducer: ((), _) => ReasonReact.NoUpdate,
  render: ({state: {items}}) => {
    let numItems = List.length(items);
    <div className="app">
      <div className="title">
        (element("What to do"))
      </div>
      <button
        onClick=((_) => Js.log("didn't add somthing"))
      >
        (element("Add something"))
      </button>
      <div className="items">
        (element("Nothing"))
      </div>
      <div className="footer">
        (element(string_of_int(numItems) ++ " items"))
      </div>
    </div>
  }
};
