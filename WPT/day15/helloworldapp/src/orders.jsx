import React from "react";
import data from "./data/orders.json";
import Order from "./order";
class Orders extends React.Component {
  render() {
    const orders = data;
    return (
      <div className="container m-sm">
        {orders.map((item) => (
          <Order
            key={item.id}
            id={item.id}
            customer={item.customer}
            orderDate={item.orderdate}
            amount={item.amount}
            status={item.status}
          />
        ))}
      </div>
    );
  }
}
export default Orders;
