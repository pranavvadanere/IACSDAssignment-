/*
 *3:Write function to swap two numbers.
*/
public class Swap {
	public static void swap(int a, int b) {
		int temp = a;
		a = b;
		b = temp;
		System.out.println("after swap");
		System.out.println(a);
		System.out.println(b);
	}
	public static void main(String[] args) {
		int  a = 10;
		int b= 20;
		swap(a,b);
	}
}
