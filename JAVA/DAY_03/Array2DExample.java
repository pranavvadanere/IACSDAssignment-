/*
 * 2:Write a Java program to accept 2D aaray elements.Display all elements.
 * 
*/
import java.util.Scanner;

public class Array2DExample {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter row");
		int row = scan.nextInt();
		System.out.println("enter col");
		int col = scan.nextInt();
		int[][] arr = new int[row][col];
		
		System.out.println("enter array elements");
		for(int i = 0; i < row;i++) {
			for(int j = 0; j < arr[i].length;j++ ) {
				System.out.println("for "+ i + ":"+ j);
				arr[i][j] = scan.nextInt();
			}
		}
		System.out.println("Elemets are");
		
		for(int i = 0; i < arr.length;i++) {
			for(int j =0; j < arr[i].length;j++) {
				System.out.println(arr[i][j]);
			}
		}
		scan.close();
	}

}
