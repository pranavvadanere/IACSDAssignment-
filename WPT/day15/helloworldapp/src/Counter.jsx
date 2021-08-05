import React from "react";

class Counter extends React.Component {
  constructor(props) {
    super(props);
    this.state = { count: this.props.count };
  }

  render() {
    return (
      <div>
        <button
          onClick={() => {
            this.setState({ count: this.state.count - 1 });
            this.props.handler(this.state.count - 1);
          }}
        >
          -
        </button>
        <input type="text" value={this.state.count} />
        <button
          onClick={() => {
            this.setState({ count: this.state.count + 1 });
            this.props.handler(this.state.count + 1);
          }}
        >
          +
        </button>
      </div>
    );
  }
}
export default Counter;
