// 21. Write a C program to find HCF (GCD) of two numbers.
#include<stdio.h>

int main(){
	int a = 0, b = 0,gcd = 0,i,max = 0 ;
	printf("enter the value for a and b\n");
	scanf("%d %d",&a,&b);

	max = a > b ? a: b;

	for(i = 1; i <= b; ++i){
		if(a % i ==0 && b % i == 0){
			gcd = i;
		}
	}
	printf("%d is gcd \n",gcd);
	return 0;	
}
/*
output
ranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem21.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter the value for a and b
12 24
12 is gcd 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter the value for a and b
20
70
10 is gcd 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop
*/