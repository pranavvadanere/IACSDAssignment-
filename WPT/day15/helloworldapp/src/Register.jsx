import React from "react";

//Class Component

class Register extends React.Component {
  render() {
    return (
      <div>
        <h3>New Customer Registration</h3>
        <form>
          <div className="form-group">
            <label for="firstname">First Name:</label>
            <input type="text" className="form-control" id="firstname" />
          </div>

          <div className="form-group">
            <label for="lastname">Last Name:</label>
            <input type="text" className="form-control" id="lastname" />
          </div>

          <div className="form-group">
            <label for="contactnumber">Email address:</label>
            <input type="text" className="form-control" id="contactnumber" />
          </div>
          <div className="form-group">
            <label for="email">Email address:</label>
            <input type="email" className="form-control" id="email" />
          </div>
          <div className="form-group">
            <label for="pwd">Password:</label>
            <input type="password" className="form-control" id="pwd" />
          </div>
          <div className="checkbox">
            <label>
              <input type="checkbox" /> Remember me
            </label>
          </div>
          <button type="submit" className="btn btn-success">
            Submit
          </button>
        </form>
      </div>
    );
  }
}

export default Register;
