import java.util.Scanner;

public class CharArrayDemo {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		System.out.println("enter the size of char array");
		int size = scan.nextInt();

		char[] arr = new char[size];
		
		System.out.println("enter the elements in char array");
		for(int i = 0; i < arr.length;i++) {
			arr[i]= scan.next().charAt(0);
		}
		String str = new String(arr);
		System.out.println(str);
		
		scan.close();
	}
}
