//11. Write a C program to print all natural numbers from 1 to n. - using while loop 

#include <stdio.h>

int main(){
	int no;
	int i = 1;
	printf("enter a number\n");
	scanf("%d",&no);

	while(i <= no){
		printf("%d\n",i);
		i++;
	}
	return 0;
}
