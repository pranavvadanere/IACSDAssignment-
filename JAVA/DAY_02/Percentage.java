import java.util.Scanner;

/*
:Write a program which will accept student information like rollno,name,5 subject marks.calculate total and percentage.calculate grade.. 
           per >75 grade :A
           per<74 and >60 :B
           per<59  :C
*/
public class Percentage {
	

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter the roll no");
		int rollNo = scan.nextInt();
		System.out.println("enter Name");
		String name = scan.next();
		System.out.println("enyter 5 sub marks");
		int sub1 = scan.nextInt();
		int sub2 = scan.nextInt();
		int sub3 = scan.nextInt();
		int sub4 = scan.nextInt();
		int sub5 = scan.nextInt();
		
		int total = sub1+sub2+sub3+sub4+sub5;
		System.out.println("total of mark is "+total);
		float percentage =  (float )total /(float) 500.00 * 100; 
		char grade = '\0';
		if(percentage >= 75)
			grade = 'A';
		else if(percentage < 74 && percentage >= 60)
			grade = 'B';
		else
			grade = 'C';
		
		System.out.println("REPORT");
		System.out.println("Name is "+ name);
		System.out.println("Roll no is "+rollNo);
		System.out.println("Grade is "+ grade);
		scan.close();
	}

}
