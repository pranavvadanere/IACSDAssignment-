package com.iacsd.package3;

import com.iacsd.package1.Student;
import com.iacsd.package2.Batch;

public class Test {

	public static void main(String[] args) {
		Student stud1 = new Student();
		stud1.accept();
		stud1.display();
		Batch batch = new Batch();
		batch.accept();
		batch.display();
	}
}
