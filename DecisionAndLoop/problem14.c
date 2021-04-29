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