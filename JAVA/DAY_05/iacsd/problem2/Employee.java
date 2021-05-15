/*Problem Statement 2:
2.1: Create Employee class with empid,name,address,salary.Use Getter Setters
2.2 :create array of 5 employees...show all employees using for loop as well as for each loop...in same assignment
2.3:create array of 5 employees ...show those employee who are getting salary >20000.
 * */
package com.iacsd.problem2;

import java.util.Scanner;

public class Employee {
	private int empID;
	private String name;
	private String address;
	private double salary;
	private static int countOfObj = 0;
	private static Scanner scan = new Scanner(System.in);
	
	public Employee() {
		if(countOfObj > 0) {
			this.empID = 100 + countOfObj;
		}else {
			this.empID = 100;
		}
		countOfObj++;
	}
	public Employee(String name, String address,double salary) {
		this();
		this.name = name;
		this.address = address;
		this.salary = salary;
	}
	
	public void setID(int empID) {
		this.empID = empID;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setAddress(String address) {
		this.address = address;
	}
	public void setSalary(double salary) {
		this.salary = salary;
	}
	public int getID() {
		return empID;
	}
	public String getName() {
		return name;
	}
	public String getAddress(){
		return address;	
	}
	public double getSalary(){
		return this.salary;
	}
	public void accept() {
		System.out.println("enter name");
		this.name = scan.nextLine();
		scan.nextLine();
		this.address = scan.nextLine();
	}
	public void display() {
		System.out.println("Id" + "\t" +this.empID + "\t" + "Name" + "\t" + this.name + "\t" + "Address" + this.address );
	}
}
