// 18 Write a C program to find power of a number using for loop.
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//function name : findPower
//input: integer,integer 
//output: integer 
//description:  return n ^ power
//author : Pranav Vadnere
// date 29 APR 2021
//////////////////////////////////////////////////////////////////////////////

int findPower(int no,int power){
	int result = 1;
	int i;
	for(i = 1; i <= power; ++i){
		result = result * no;
	}
	return result;
}
int main(){
	int no = 0,power = 0,res = 0;
	printf("enter a number \n");
	scanf("%d",&no);
	printf("enter a rest to the power\n");
	scanf("%d",&power);
	res = findPower(no,power);
	printf("%d\n",res);
	return 0;
}
/*
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem18.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number 
2
enter a rest to the power
3
8
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number 
2 
enter a rest to the power
8
256
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/