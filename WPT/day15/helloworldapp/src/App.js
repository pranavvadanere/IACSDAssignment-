import { BrowserRouter as Router, Route, Link } from "react-router-dom";
import Orders from "./orders";
import Login from "./Login";
import List from "./List";
import Register from "./Register";
function App() {
  return (
    <div className="App">
      <BasicRouting></BasicRouting>
    </div>
  );
}
function BasicRouting() {
  return (
    <div>
      <h1>Transflower store</h1>
      <hr />
      <Router>
        <Link to="/">Home </Link> | <Link to="/about">About</Link>|
        <Link to="/contact">Contact</Link>|<Link to="/flowers">Flowers</Link>|
        <Link to="/orders">Orders</Link>|<Link to="/login">Login</Link> |
        <Link to="/register">Register</Link>
        <hr />
        <switch>
          <Route exact path="/">
            <Home />
          </Route>
          <Route exact path="/about">
            <About />
          </Route>
          <Route exact path="/contact">
            <Contact />
          </Route>
          <Route exact path="/orders">
            <Orders />
          </Route>
          <Route exact path="/login">
            <Login />
          </Route>
          <Route exact path="/register">
            <Register />
          </Route>
          <Route exact path="/flowers">
            <List />
          </Route>
        </switch>
      </Router>
    </div>
  );
  function Home() {
    return (
      <div>
        <div className="jumbotron text-center">
          <h1>Transflower learning pvt ltd</h1>
          <p>mentor as service</p>
          <p>react js learnig is fun</p>
        </div>
        <div className="container">
          <div className="row">
            <div className="col-sm-4">
              <p>flower</p>
              <p>celebrate moments with flower</p>
            </div>
            <div className="col-sm-4">
              <p>Fruits</p>
              <p>enjoy helath fruits</p>
            </div>
            <div className="col-sm-4">
              <p>vegetables</p>
              <p>boost immunee wirh vegies</p>
            </div>
          </div>
        </div>
      </div>
    );
  }
  function About() {
    return (
      <div>
        <h1>about us</h1>
        <h3>Transflower agro services</h3>
      </div>
    );
  }
  function Contact() {
    return (
      <div>
        <h1>contact us</h1>
        <h3>Transflower farm</h3>
        <p>tambde mala</p>
        <p>ambegaon</p>
        <p>Dist pune</p>
      </div>
    );
  }
}

export default App;
