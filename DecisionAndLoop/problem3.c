/*
Accept a number and display it multiplication table.
*/

#include <stdio.h>

int main(){
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i = 1; i <= 10; ++i){
		printf("%dX%d= %d\n",n,i,n*i);
	}
	return 0;
}