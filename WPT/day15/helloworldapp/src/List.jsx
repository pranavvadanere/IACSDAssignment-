import React from "react";

import data from "./data/products.json";
import Product from "./Product";
class List extends React.Component {
  render() {
    const flowers = data;

    return (
      <div>
        {flowers.map((item) => (
          <Product
            title={item.title}
            description={item.description}
            imageurl={item.imageurl}
            unitprice={item.unitprice}
            quantity={item.quantity}
            likes={item.likes}
          />
        ))}
      </div>
    );
  }
}
export default List;
