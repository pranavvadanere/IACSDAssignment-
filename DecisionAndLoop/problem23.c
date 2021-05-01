// 23. Write a C program to check whether a number is Prime number or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL isPrime(int no){
	int i;
	int flag = 0;
	if(no == 0 || no == 1) // filter 
		return FALSE;
	if(no < 0){          //updated incorrect input
		no = -no;
	}

	for(int i = 2; i*i <= no; ++i){
		if(no % i == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		return FALSE;
	else
		return TRUE;
}
int main(){
	int no;
	BOOL result = FALSE;
	printf("enter a number\n");
	scanf("%d",&no);
	result = isPrime(no);
	if(result)
		printf("no is prime\n");
	else
		printf("no is not prime\n");
	return 0;
}