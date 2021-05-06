import java.util.Scanner;

public class Factorial{

int findFact(int no){
	if(no < 0){
		no = -no;
	}
	int fact = 1;
	for(int i =1 ;i <= no; ++i){
		fact = fact * i;
	}
	return fact;
}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Factorial fact = new Factorial();
		System.out.println("enter a number to find Factorial");
		int no = scan.nextInt();
		System.out.println(fact.findFact(no));
	}
}