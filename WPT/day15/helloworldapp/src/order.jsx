import React from "react";

class Order extends React.Component {
  render() {
    return (
      <div className="row">
        <div className="col-sm-2">
          <h4>
            <u>{this.props.customer}</u>{" "}
          </h4>
          <hr />
          <p>id: {this.props.id}</p>
          <p>order date : {this.props.orderDate}</p>
          <p>amount:{this.props.amount}</p>
          <p>status : {this.props.status}</p>
          <br />
          <button className="btn-primary m-1">add to cart</button>
        </div>
      </div>
    );
  }
}
export default Order;
