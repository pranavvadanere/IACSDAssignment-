package com.iacsd.package2;

import com.iacsd.package1.Student;

public class Batch {
	private char div;
	public void accept() {
		System.out.println("accpeting info in batch");
	
	}
	public void display() {
		System.out.println("display info in batch");
	}
	public static void main(String[] args) {
		Student std = new Student();
		System.out.println(std.name);
		System.out.println(std.rollNo);
//		System.out.println(std.grade);  private are not visbile in diff package ,class,
//		System.out.println(std.totalMarks); default access specifier so not visible in diff package
		
	}
}
