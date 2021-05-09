import java.util.Scanner;

public class ReverseArray {

	public static void printReverseArray(int[] arr){
		for(int i = arr.length -1; i>=0; --i){
			System.out.println(arr[i]);
		}
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter the size of array");
		int no = scan.nextInt();
		int[] arr = new int[no];
		System.out.println("enter the elements of array");
		for (int i = 0;i < arr.length;++i) {
			arr[i] = scan.nextInt();
		}
		System.out.println("Printing in reverse order");

		printReverseArray(arr);
		scan.close();
	}
}
