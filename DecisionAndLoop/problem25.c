// 25. Write a C program to check whether a number is Perfect number or not.

// example: 6 is the first perfect number Proper divisors of 6 are 1, 2, 3 Sum of its proper divisors = 1 + 2 +
// 3 = 6. Hence 6 is a perfect number.
#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL isPerfect(int no){
	int i = 0;
	int sum = 0;
	for( i = 1; i <= no/2; ++i){
		if(no % i == 0)
			sum+=i;
	}
	if(sum == no)
		return TRUE;
	else
		return FALSE;
}
int main(){
	int no;
	BOOL res = FALSE;
	printf("enter a number\n");
	scanf("%d",&no);
	res = isPerfect(no);
	if(res)
		printf("Perfect number\n");
	else
		printf("not perfect number\n");

	return 0;
}

/*
output
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
6
Perfect number
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
24
not perfect number
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
36
not perfect number
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/