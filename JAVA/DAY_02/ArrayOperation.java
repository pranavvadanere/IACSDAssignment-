import java.util.Scanner;

/*
 *Write a program to create an array of integers and perform following operations on that array like 
  finding the sum, average, maximum and minimum number in that array. Accept the numbers of the  
array from user. 
 */

public class ArrayOperation {
	
	public static int maxInArray(int[] arr){
		int max = arr[0];
		for(int i = 0; i < arr.length; i++){
			if(arr[i]> max)
				max = arr[i];
		}
		return max;
	}
	public static int minInArray(int[] arr){
		int min = arr[0];
		for(int i = 0; i < arr.length; i++){
			if(arr[i] <  min)
				min = arr[i];
		}
		return min;
	}
	public static int findSum(int[] arr){
		int sum = 0;
		for(int i = 0; i < arr.length; i++){
			sum += arr[i];
		}
		return sum;
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter the size of array");
		int no = scan.nextInt();
		int[] arr = new int[no];
		System.out.println("enter the elements");
		for (int i = 0; i < arr.length;i++) {
			arr[i] = scan.nextInt();
		}

		System.out.println("max is "+ maxInArray(arr));
		System.out.println("min is "+ minInArray(arr));
		System.out.println("sum of all elements is "+ findSum(arr));
		System.out.println("average of all elements is "+ (findSum(arr))/arr.length);
		scan.close();
	}
}
