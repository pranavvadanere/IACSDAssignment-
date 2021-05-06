import java.util.Scanner;

class SumSeries{
	int sumOfSeries(int no){  // o(N) approch
		int sum = 0;
		for(int i = 1; i <= no; i++){
			sum+=i;
		}
		return sum;
	}
	int sumOfSeriesX(int no){ // constant time approach
		return (no * (no + 1))/2;
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		SumSeries ss = new SumSeries();
		System.out.println("enter a number till want to cal sum");
		int no = scan.nextInt();
		System.out.println(ss.sumOfSeries(no));
		System.out.println(ss.sumOfSeriesX(no));

	}
}