import java.util.Scanner;

class ReverseNum{
	int reverseNum(int digit){
		int rev = 0;
		while(digit != 0){
			int lastDigit = digit % 10;
			rev = rev * 10 + lastDigit;
			digit/=10;
		}
		return rev;
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		ReverseNum rev = new ReverseNum();
		System.out.println("enter a Number");
		int digit = scan.nextInt();
		int revDigit = rev.reverseNum(digit);
		System.out.println(revDigit + " is rev no");

	}
}