/*
Accept a number and display its sum of digits.
*/
#include<stdio.h>

int main(){
	int no,sum = 0,lastDigit = 0;
	int original = 0;
	printf("enter a number\n");
	scanf("%d",&no);
	original = no;
	while(no != 0){
		lastDigit = no % 10;
		sum +=lastDigit;
		no/=10;
	}
	printf("sum of %d is %d \n",original, sum);
	return 0;
}
/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem4.c -o myexe
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./myexe 
enter a number
121
sum of 121 is 4 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/