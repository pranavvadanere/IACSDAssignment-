import java.util.Scanner;

class SumOFOddEven{
	void sumOfOddEven(int no){
		int sumOfOdd = 0;
		int sumOfEven = 0;
		for(int  i = 1; i <= no; ++i){
			if(i % 2 == 0)
				sumOfEven+=i;
			else
				sumOfOdd+=i;
		}
		System.out.println("sum of even "+sumOfEven);
		System.out.println("sum of odd "+sumOfOdd);
	} 
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		SumOFOddEven sum = new SumOFOddEven();
		System.out.println("enter a Number till want to find");
		int no = scan.nextInt();
		sum.sumOfOddEven(no);
	}
}