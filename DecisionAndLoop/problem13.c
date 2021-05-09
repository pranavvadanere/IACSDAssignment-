// Write a C program to find sum of all even and odd numbers between 1 to n.
#include <stdio.h>

int main(){
	int no,sumOfeven = 0, sumOfOdd = 0;
	printf("enter a value of n\n");
	scanf("%d",&no);

	for(int i =1 ; i <=no; ++i){
		if(i % 2 == 0)
			sumOfeven+=i;
		else
			sumOfOdd+=i;
	}
	printf("sum of odd  = %d \n", sumOfOdd);
	printf("sum of even  = %d \n",sumOfeven);
	return 0;
}

/*
OUTPUT
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem13.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a value of n
10
sum of odd  = 25 
sum of even  = 30 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/