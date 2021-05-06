import java.util.Scanner;
public class Addition{
	int additonOfNum(int iNo1, int iNo2){
		return iNo1 +iNo2;
	}
	String additionOfChar(char ch1, char ch2){
		return ch1+""+ch2;
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Addition obj = new Addition();
		System.out.println("enter first number");
		int iInput1 = scan.nextInt();
		System.out.println("enter second number");
		int iInput2 = scan.nextInt();
		int iResult = obj.additonOfNum(iInput1,iInput2);
		System.out.println("Addition of 2 num is "+ iResult);

		System.out.println("enter the character 1");
		char cIp1 = scan.next().charAt(0);
		char cIp2 = scan.next().charAt(0);
		String sRes = obj.additionOfChar(cIp1,cIp2);
		System.out.println("addition Of Char is "+ sRes);
	}
}
