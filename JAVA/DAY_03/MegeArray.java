import java.util.Scanner;

public class MegeArray {
	public static void mergeArray(int[] arr1,int[] arr2,int[] merge) {
		int indexCnt = 0;
		for(int i =0; i < arr1.length; i++) {
			merge[indexCnt++] = arr1[i];
		}
		for(int i = 0; i < arr2.length; i++) {
			merge[indexCnt++] = arr2[i];
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.println("enter a no of elements want to add in array 1");
		int size1 = scan.nextInt();
		System.out.println("enter a no of elements want to add in array 2");
		int size2 = scan.nextInt();
		int[] arr1 = new int[size1];
		int[] arr2 = new int[size2];
		int totalLen = arr1.length+ arr2.length;
		int[] merge = new int[totalLen];
		System.out.println("enter elements in array 1");
		for(int i = 0; i < arr1.length;i++) {
			arr1[i] = scan.nextInt();
		}
		System.out.println("enter elements in array 2");
		
		for(int i = 0; i < arr2.length;i++) {
			arr2[i] = scan.nextInt();
		}
		mergeArray(arr1,arr2,merge);
		System.out.println("after merge1");
		for(int i = 0; i < merge.length; i++) {
			System.out.print(merge[i] + " ");
		}
		scan.close();
	}

}
