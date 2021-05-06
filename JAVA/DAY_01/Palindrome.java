import java.util.Scanner;
class Palindrome{
	boolean isPalindrome(int no){
		int origianlNo = no;
		int rev = 0;
		while(no != 0){
			int lastDigit = no % 10;
			rev = rev * 10 + lastDigit;
			no/=10;
		}
		if(rev == origianlNo)
			return true;
		else
			return false;
	}
	public static void main(String[] args) {
		Scanner scan  = new Scanner(System.in);
		Palindrome palindrome = new Palindrome();
		System.out.println("enter number");
		int no = scan.nextInt();
		System.out.println(palindrome.isPalindrome(no));
	}
}