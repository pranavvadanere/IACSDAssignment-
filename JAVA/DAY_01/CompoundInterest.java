import java.util.Scanner;
import java.lang.Math;
public class CompoundInterest{
	double findInterest(double principle, double rateOfInterest,int year){
		double amount = 0;
		double temp  = (1 + (rateOfInterest/100));
		amount = principle * Math.pow(temp,3);
		return amount;
	}
	public static void main(String[] args) {
		CompoundInterest ci = new CompoundInterest();
		Scanner scan = new Scanner(System.in);
		double principle = scan.nextDouble();
		double rateOfInterest = scan.nextDouble();
		int  year = scan.nextInt();
		double amount = ci.findInterest(principle,rateOfInterest,year);
		System.out.println("amount is "+amount);
		System.out.println("findInterest is "+ (amount-principle));
	}
}