package com.iacsd.package1;

public class BatchInSamePkg {
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
		System.out.println(std.totalMarks);
		//System.out.println(std.grade);  grade is private so not accessible in same package 
		
		
	}

}
