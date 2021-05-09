//16. Write a C program to enter a number and print its reverse.

#include<stdio.h>

int main(){
	int no,reverseNo = 0, lastDigit = 0;
	printf("enter a number\n");	
	scanf("%d",&no);
	while(no != 0){
		lastDigit = no % 10;
		reverseNo = reverseNo * 10 + lastDigit;
		no/=10;
	}
	printf("reverse no is \n");
	printf("%d\n",reverseNo);
	return 0;
}

/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
121
reverse no is 
121
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
123
reverse no is 
321
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/