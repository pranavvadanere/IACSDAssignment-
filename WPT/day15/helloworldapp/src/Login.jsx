import React from "react";

class Login extends React.Component {
  render() {
    return (
      <div>
        <form action="#">
          <div className="form-group">
            <label for="email">Email address:</label>
            <input
              type="email"
              className="form-control"
              placeholder="Enter email"
              id="email"
            />
          </div>
          <div className="form-group">
            <label for="pwd">Password:</label>
            <input
              type="password"
              class="form-control"
              placeholder="Enter password"
              id="pwd"
            />
          </div>
          <div className="form-group form-check">
            <label className="form-check-label">
              <input className="form-check-input" type="checkbox" /> Remember me
            </label>
          </div>
          <button type="submit" class="btn btn-primary">
            Submit
          </button>
        </form>
      </div>
    );
  }
}
export default Login;
