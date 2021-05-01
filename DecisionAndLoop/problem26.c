// //Write a C program to check whether a number is Strong number or not.
// Strong number is a special number whose sum of factorial of digits is equal to the original number. For
// example: 145 is strong number. Since, 1! + 4! + 5! = 145

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////////////////////////////////////
//	function name : isStrion
//	function desc : check the no is strong or not
//	input : integer
//	output: BOOL 
//	author: pranav vadanere
// 	date 30 APR	 2021
////////////////////////////////////////////////////////////////////////////////////////
BOOL isStrong(int no){
	int original = no;
	int lastDigit = 0;
	int i= 0, fact = 1;
	int totalSumOfFact = 0;
	while(no != 0){
		fact = 1;
		lastDigit = no % 10;
		for(i = 1; i <= lastDigit; ++i){
			fact = fact * i;
		}
		totalSumOfFact += fact;
		no/=10;
	}
	printf("%d\n",totalSumOfFact );
	if(totalSumOfFact == original)
		return TRUE;
	else
		return FALSE;
}
int main(){
	int no;
	BOOL res = FALSE;
	printf("enter a number to check strong or not\n");
	scanf("%d",&no);
	res = isStrong(no);
	if(res)
		printf("yes its strong number\n");
	else
		printf("not a strong number\n");

	return 0;
}
