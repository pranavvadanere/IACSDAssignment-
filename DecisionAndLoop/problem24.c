// Write a C program to print all Prime numbers between 1 to n.

#include <stdio.h>

void printPrimes(int no){
	//update in input if wrong
	int i = 0, j= 0, flag = 0;
	if(no < 0)
		no = -no;

	for(int i = 2; i <= no; ++i){
		flag = 0;
		for(j = 2; j*j <= i; ++j){
			if(i % j == 0){
				flag = 1;
				break;
			}
		
}		if(flag == 0)
			printf("%d\t",i);
	}
}
int main(){
	int no;
	printf("enter a number till you want to print primes\n");
	scanf("%d",&no);
	printPrimes(no);

	return 0;
}