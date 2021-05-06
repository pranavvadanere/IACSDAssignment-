import java.util.Scanner;

class AllPrime{
	void printPrimes(int no){  // in o(sqrt(N)) time complexity
		if(no < 2)
			return;
		int flag = 0;
		for(int i = 2; i < no; i++){
			flag = 0;
			for(int j = 2; j*j <= i; j++){
				if( i %  j == 0){
					flag = 1;
					break;
				}
			}
			if(flag == 0)
				System.out.println(i);
		}
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		AllPrime ap = new AllPrime();
		int no = scan.nextInt();
		ap.printPrimes(no);
	}
}