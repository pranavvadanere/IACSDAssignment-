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