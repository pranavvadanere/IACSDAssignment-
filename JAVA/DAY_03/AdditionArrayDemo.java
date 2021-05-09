import java.util.Scanner;

public class AdditionArrayDemo {
	public static void addArrays(int[][] a, int[][] b,int[][] sum ) {
		if(a.length != b.length)
			return;
		for(int i = 0; i < a.length;i++) {
			for(int j = 0; j< a[i].length;j++) {
				sum[i][j] = a[i][j] + b[i][j];
			}
		}
	}
	public static void acceptArray(int[][] arr) {
		Scanner scan = new Scanner(System.in);
		for(int i = 0; i < arr.length;i++) {
			for(int j = 0; j < arr[i].length;j++) {
				arr[i][j] = scan.nextInt();
			}
		}
	}
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);

		System.out.println("enter the row");
		int row = scan.nextInt();
		System.out.println("enter col");
		int col = scan.nextInt();
		
		int[][] arr = new int[row][col];
		
		int[][] brr = new int[row][col];
		int[][] ans = new int[row][col];
		acceptArray(arr);
		System.out.println("in brr now");
		acceptArray(brr);
		addArrays(arr,brr,ans);
		System.out.println("after additon");
		for(int i = 0; i < ans.length;i++) {
			for(int j = 0; j < ans[i].length;j++) {
				System.out.print(ans[i][j]+ " ");
			}
			System.out.println();
		}
	scan.close();	
 	}

}

/*output
 * enter the row
2
enter col
3
1
2
3
4
5
6
in brr now
1
2
3
4
5
6
after additon
2 4 6 
8 10 12 
 * 
 * */
