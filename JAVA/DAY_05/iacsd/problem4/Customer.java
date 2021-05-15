/*Problem Statement 4:
->Create a java applicstion for the following.
 Create a Customer class , with data members (all private : tight encapsulation)
name(String),email(String),age(int), creditLimit(double)

4.1 Supply a parameterized constructor to accept all details from user

4.2 Supply an argument less  constructor to init default name to "Riya" , email to "riya@gmail.com",age=25,creditLimit=10000
(Must use constructor chaining)

4.3 Write a method , getDetails to return String form of customer name & credit limit only.
4.4 Supply getter & setter for creditLimit.

Naming convention : public void setCreditLimit(double limit) {...}
public double getCreditLimit(){...}

4.5 Create a TestCustomer class . Use scanner to accept user i/ps.
Create 2 customers using 2 different constructors(4.1 : customer1 ,4.2 : customer2)
Display customer details of both customers.
Prompt user , for changing creditLimit of the customer2.
Display new credit limit on the console.

*/


package com.iacsd.problem4;

public class Customer {
	private int id;
	private String name;
	private String email;
	private int age;
	private double creditLimit;
	private static int objcnt = 0;
	public Customer() {
		if(objcnt == 0) {
			this.id = 100;
		}else {
			this.id = 100 + objcnt;
		}
		this.name = "Riya";
		this.email = "riya@gmail.com";
		this.age = 25;
		this.creditLimit = 10000.0;
		objcnt++;
	}
	public Customer(String name, String email,int age, double creditLimit) {
		this();
		this.name = name;
		this.email = email;
		this.age  = age;
		this.creditLimit = creditLimit;
	}
	public String getDetails() {
		return "ID " + id +"\tCustomer Name "+ this.name + "\tCredit limit " + this.creditLimit;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public void setCreditLimit(double creditLimit) {
		this.creditLimit = creditLimit;
	}
	public String getName() {
		return name;
	}
	public String getEmail() {
		return this.email;
	}
	public int getAge() {
		return this.age;
	}
	public double getCreditLimit() {
		return creditLimit;
	}
	public int getID(){
		return this.id;
	}
}
