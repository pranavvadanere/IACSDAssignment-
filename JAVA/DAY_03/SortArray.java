import java.util.Scanner;

public class SortArray {
	public static void sortArray(int[] arr) {
		for(int i = 0; i < arr.length -1; i++) {
			for(int j = 0; j < arr.length - 1 - i; j++) {
				if(arr[j] > arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter size of aray");
		int size = scan.nextInt();
		int[] arr = new int[size];
		System.out.println("enter the array ele");
		for(int i = 0; i < arr.length; i++) {
			arr[i] = scan.nextInt();
		}
		sortArray(arr);
		System.out.println("after sorting");
		for(int i : arr) {
			System.out.print(i + " ");
		}
	}

}
