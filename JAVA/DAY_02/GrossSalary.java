import java.util.Scanner;

/*
 * 10: Write a  program to input basic salary of an employee and calculate its Gross salary according to 
following: Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
public class GrossSalary {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		double grossSalary = 0.0;
		System.out.println("enter the employee salary");
		double salary = scan.nextDouble();
		double hra = 0.0;
		double da = 0.0;
		if(salary <= 10000){
			hra = 0.2;
			da = 0.8;

		}else if(salary <=20000){
			hra = 0.25;
			da = 0.90;

		}else{
			hra = 0.3;
			da = 0.95;
		}
		grossSalary = salary + (salary *da) + (salary * hra);
		System.out.println("gross salary is "+ grossSalary);

	}
}
