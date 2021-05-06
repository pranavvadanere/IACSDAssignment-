import java.util.Scanner;

public class FindGreater{

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("enter 3 no's");		
		int first = scan.nextInt();
		int second = scan.nextInt();
		int third = scan.nextInt();

		int max = 0;

		if(first > second){
			if(first > third){
				max = first;
			}else{
				max = third;
			}
		}else if(second > first){
			if(second > third){
				max = second;
			}else{
				max = third;
			}
		}
		System.out.println("max = "+max);
	}
}