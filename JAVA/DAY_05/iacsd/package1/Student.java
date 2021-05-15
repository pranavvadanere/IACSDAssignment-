package com.iacsd.package1;

import java.util.Scanner;

public class Student {
	public int rollNo;
	public String name;
	private char grade;
	int totalMarks;
	private static  Scanner scan = new Scanner(System.in);
	
	public void accept() { 
		System.out.println("enter roll no");
		this.rollNo = scan.nextInt();
		scan.nextLine();
		this.name = scan.nextLine();
		this.grade = scan.next().charAt(0);
		this.totalMarks = scan.nextInt();
	}
	public void display() {
		System.out.println("roll no " + rollNo + "\t" + "name is"+"\t"+name + "grade"+ grade + "\t" + "total marsk " + totalMarks );
	}
}
