import java.util.Scanner;

public class FindIndex {
	
	public static int findIndex(int[] arr,int find){
		int i =0;
		for(i = 0; i < arr.length; i++){
			if(arr[i] == find){
				break;
			}
		}
		if(i < arr.length)
			return i;
		else
			return -1;
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
		System.out.println("enter the no want to search in array");
		int find = scan.nextInt();
		int index = findIndex(arr,find);

		if(index != -1)
			System.out.println("element found at "+index+" location" );
		else
			System.out.println("element did not found");
		
		scan.close();
	}
}
