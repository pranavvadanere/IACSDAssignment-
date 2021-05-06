import java.util.Scanner;

public class Swap{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter value of 2 num");
		int iNo1 = scan.nextInt();
		int iNo2 = scan.nextInt();
		System.out.println("before swap");
		System.out.println(iNo1 + "  "+ iNo2);

		int temp = iNo1;
		iNo1 = iNo2;
		iNo2 = temp;

		System.out.println("after swap");
		System.out.println(iNo1 + "  "+ iNo2);
	}
}