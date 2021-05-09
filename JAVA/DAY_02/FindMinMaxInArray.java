import java.util.Scanner;

public class FindMinMaxInArray {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter the size of array");
		int no = scan.nextInt();
		int[] arr = new int[no];
		System.out.println("enter the elements");
		for (int i = 0; i < arr.length;i++) {
			arr[i] = scan.nextInt();
		}
		int min = arr[0];
		int max = arr[0];
		for(int i = 0; i < arr.length; i++){
			if(arr[i] > max)
				max = arr[i];
			if(arr[i] < min)
				min = arr[i];
		}
		System.out.println("Miniumum from array is "+ min);
		System.out.println("Maximum from arrays is "+max);
		
		scan.close();
	}
}
