import java.util.Scanner;

class PrimeNum{
	boolean isPrime(int no){
		int flag = 0;
		if(no == 0 || no == 1)
			return false;
		for(int i = 2; i*i <= no;++i){
			if(no % i == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			return false;
		else
			return true;
	}
	public static void main(String[] args) {
		PrimeNum prime = new PrimeNum();

		Scanner scan = new Scanner(System.in);
		System.out.println("eneter a Number");
		int no = scan.nextInt();
		System.out.println(prime.isPrime(no));


	}
}