import java.util.Scanner;

public class ArmstrongNumber{

	// 153 = 1^3 + 5^3 + 3 ^ 3
	boolean isArmstrongNumber(int no){
		int size = 0;
		int originNo = no;
		int totalSumOfPower = 0;
		while(no!= 0){
			no/=10;
			size++;
		}
		no  = originNo;
		while(no != 0){
			int power = 1;
			int lastDigit = no % 10;
			for(int i =1; i<= size; ++i){
				power = power * lastDigit;
			}
			totalSumOfPower+=power;
			no/=10;
		}
		if(totalSumOfPower == originNo)
			return true;
		else
			return false;
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		ArmstrongNumber arm = new ArmstrongNumber();
		System.out.println("enter the no");
		int no = scan.nextInt();
		System.out.println(arm.isArmstrongNumber(no));

	}
}