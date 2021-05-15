package com.iacsd.problem2;

import java.util.Scanner;

public class TestEmployee {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter number of employess");
		int size = scan.nextInt();
		Employee[] employees = new Employee[size];
        
		
		// for - each loop
		for(Employee emp : employees) {
			emp.accept();
		}
		for(Employee emp : employees) {
			if(emp.getSalary() >  20000 )
				emp.display();
		}
		// for loop
		for(int i = 0; i < employees.length; i++) {
			employees[i].accept();
		}
		for(int i = 0; i < employees.length; i++) {
			if(employees[i].getSalary() > 20000) {
				employees[i].display();
			}
		}
		scan.close();
	}

}
