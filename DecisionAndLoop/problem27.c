// 27. Write a C program to print Fibonacci series up to n terms.

#include<stdio.h>

void printFib(int no){
	int i =0;
	int first = 0;
	int second = 1;
	int third = first +second;
	for(i = 1; i<= no; i++){
		printf("%d\n",first);
		first = second;
		second = third;
		third = first + second;
	}
}

int main(){
	int no;
	printf("enter a value to print till Fibonacci series\n");
	scanf("%d",&no);
	printFib(no);
	return 0;
}