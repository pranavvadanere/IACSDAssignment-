import java.util.Scanner;

//1:Write a function to accept array of string
//.Display all elements in uppercase.
public class UpperCase {
	public static void upperCase(String str) {
		char[] arr = str.toCharArray();
		for(int i = 0; i < arr.length; ++i) {
			if(arr[i] >='a' && arr[i] <='z') {
				arr[i] = (char) ('A' + (arr[i] - 'a'));
			}
		}
		String converted = new String(arr);
		System.out.println(converted);
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter the size of array");
		
		int no = scan.nextInt();
		String[] names = new String[no];
		scan.nextLine();
		for(int i = 0; i < names.length;i++) {
			names[i] = scan.nextLine();
		}
		for(int i = 0; i < names.length;i++) {
			upperCase(names[i]);
		}
		scan.close();		
	}

}
