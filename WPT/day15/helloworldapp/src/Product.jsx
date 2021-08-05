import React from "react";
import Counter from "./Counter";
class Product extends React.Component {
  constructor(props) {
    super(props);
    this.state = { likes: this.props.likes };
    this.handler = this.handler.bind(this);
  }

  handler(data) {
    this.setState({ likes: data });
  }

  render() {
    return (
      <div>
        <h3>flower details</h3>
        <hr />
        <p>title : {this.props.title}</p>
        <img src={this.props.imageURL} width="100" height="100" />
        <p>Description : {this.props.description}</p>
        <p>Quantity available : {this.props.quantity}</p>
        <p>unit price : {this.props.unitprice}</p>
        <p>likes : {this.state.likes}</p>
        <Counter count={this.state.likes} handler={this.handler}></Counter>
        <br />
        <button>add to cart</button>
      </div>
    );
  }
}

export default Product;
