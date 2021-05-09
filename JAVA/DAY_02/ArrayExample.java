import java.util.Scanner;

/*
 * 5:Write a program to accept array of 5
 *  numbers and display it.
 */
public class ArrayExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner scan = new Scanner(System.in);
		System.out.println("enter the no of element want to add");
		int no =scan.nextInt();
		int[] arr = new int[no];

		for(int i = 0; i < arr.length; i++){
			arr[i] = scan.nextInt();
		}
		System.out.println("entered elements are ");
		for(int i = 0 ; i < arr.length; ++i){
			System.out.println(arr[i]);
		}
		scan.close();

	}
}
