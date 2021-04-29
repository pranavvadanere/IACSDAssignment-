// 15. Write a C program to find first and last digit of a number.

#include <stdio.h>

int main(){
	int no;
	int lastDigit = 0, firstDigit = 0;
	printf("enter a  number\n");
	scanf("%d", &no);
	lastDigit = no % 10;
	while(no != 0){
		if(no <= 9){
			firstDigit = no;
		}
		no/=10;
	}
	printf("firts digit  = %d\n",firstDigit);
	printf("last digit = %d\n",lastDigit);
	return 0;
}