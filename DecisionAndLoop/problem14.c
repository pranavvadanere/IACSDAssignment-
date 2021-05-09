// 14. Write a C program to count number of digits in a number.
#include<stdio.h>

int main(){
	int no, count = 0;
	printf("enter a number\n");
	scanf("%d",&no);

	while(no != 0){
		count++;
		no/=10;
	}
	printf("%d\n",count);
	return 0;
}

/*
output


problem10.c  problem12.c  problem14.c  problem16.c  problem18.c  problem1.c
problem11.c  problem13.c  problem15.c  problem17.c  problem19.c  
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem14.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
123
3
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/