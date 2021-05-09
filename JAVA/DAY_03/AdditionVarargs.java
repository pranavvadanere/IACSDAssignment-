
public class AdditionVarargs {
	public static int  addition(int ... a) {
		int sum =0;
		for(int i : a) {
			sum+=i;
		}
		return sum;
	}
	public static void main(String[] args) {
		int totalSum = 0;
		
		totalSum = addition(1,2,3,4,5,6,78,8,8);
		System.out.println(totalSum);
	}

}
