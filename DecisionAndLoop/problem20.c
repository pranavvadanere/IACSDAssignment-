// 20. Write a C program to calculate factorial of a number.
#include <stdio.h>
int factorial(int no){
	int fact = 1,i;
	for(i = 1; i<= no; ++i){
		fact = fact * i;
	}
	return fact;
}
int main(){
	int no;
	printf("enter a number\n");
	scanf("%d",&no);
	printf("%d",factorial(no));
	return 0;
}

/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem20.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
5
120
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
10
3628800
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/