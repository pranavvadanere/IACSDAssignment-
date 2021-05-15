package com.iacsd.problem4;

public class TestCustomer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Customer cust1=  new Customer();
		System.out.println(cust1.getDetails());
		Customer cust2 = new Customer("pranav","p@gmail.com",25,24000.0);
		System.out.println(cust2.getDetails());
		
		cust2.setCreditLimit(40000);
		System.out.println("Updated credit limit");
		System.out.println(cust2.getDetails());

	}

}
