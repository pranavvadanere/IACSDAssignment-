//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop 

#include <stdio.h>

int main(){
	int no;
	printf("enter a number\n");
	scanf("%d",&no);

	while(no != 0){
		printf("%d\n",no);
		no--;
	}
	return 0;
}
/*
output
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
7
7
6
5
4
3
2
1
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/