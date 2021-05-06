import java.util.Scanner;
public class Power{
	int findPower(int x, int y){
		int power = 1;
		for(int i = 1; i<=y; i++){
			power = power * x;
		}
		return power;
	}
	public static void main(String[] args) {
		Power power = new Power();

		Scanner scan = new Scanner(System.in);
		System.out.println("enter the base");
		int base = scan.nextInt();
		System.out.println("enter rest to the Power");
		int restTo = scan.nextInt();
		int res = power.findPower(base,restTo);
		System.out.println(base + " rest to the "+restTo+" is  "+res);
	}
}