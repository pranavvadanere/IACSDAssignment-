import java.util.Scanner;

/*
 *4:Write functions for making addition of diffrent types(use FunctionOverloading); 
 * 
*/
public class Addition {
	public static int addition(int a,int b) {
		return a + b;
	}
	public static double addition(int a, double b) {
		return a + b;
	}
	public static float addition(int a,float b) {
		return a+ b;
	}
	public static int addition(int a, int b,int c) {
		return a+b+c;
	}
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int no1 = scan.nextInt();
		int no2 = scan.nextInt();
		System.out.println(addition(10,20.23f));
		System.out.println(addition(10,20.543));
		System.out.println(addition(no1,no2,543));
		scan.close();
		
	}

}
