// 17. Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FASLE 0
///////////////////////////////////////////////////////////////////////////////
//function name : checkPalindrome
//input: integer 
//output: BOOL 
//description: check no is palindrome or not
//author : Pranav Vadnere
// date 29 APR 2021
//////////////////////////////////////////////////////////////////////////////
BOOL checkPalindrome(int no){
	int originalNumber = no;
	int lastDigit = 0;
	int rev = 0;
	while(no != 0){
		lastDigit = no % 10;
		rev = rev * 10 + lastDigit;
		no/=10;
	}
	if(rev == originalNumber)
		return TRUE;
	else
		return FASLE;
}
int main(){
	int no;
	BOOL res = FASLE;
	printf("enter a number\n");
	scanf("%d",&no);
	res = checkPalindrome(no);
	if(res == TRUE)
		printf("It's palindrome\n");
	else
		printf("it's not palindrome\n");
	
	return 0;
}

/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
121
It's palindrome
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
123
it's not palindrome
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/