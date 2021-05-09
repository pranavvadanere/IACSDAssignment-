//Find all prime no.'s in runtime array?


#include<stdio.h>
#include <stdlib.h>

void printPrime(int* ptr,int size){

////////////////////////////////////////////////////////////////////
//
//  Function Name :         printPrime
//  Input :                 integer pointer, int size
//  Output :                print odd and even
//  Description:            it used to print prime  from array
//  Date :                  27 April 2021
//  Author name :           Pranav Vadanere
///////////////////////////////////////////////////////////////////

		int i,j,flag;
		if(ptr == NULL){
			printf("array is empty please provide correct array\n");
			return;
		}

		for(i = 1; i < size; i++){

			flag = 1;

			for(j = 2; j < ptr[i]; j++){
				if(ptr[i] % j == 0){
					flag = 0;
					break;
				}
			}
			if(flag == 1){
					printf("%d is prime\n", ptr[i]);
				} 
		}


}
int main(){
	int n, i;
	int* ptr;
	printf("enter a size of array\n");
	scanf("%d",&n);
	ptr = (int *)malloc(sizeof(int) * n);
	if(ptr == NULL ){
		printf("memory not allocated \n");
		return 0;
	}
	printf("enter a elements in array \n");

	for(i = 0; i < n; i++){
		scanf("%d",ptr+i);
	}
	printPrime(ptr,n);
	return 0;
}

/*
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ ./a.out 
enter a size of array
5
enter a elements in array 
1 2 3 4 5
2 is prime
3 is prime
5 is prime
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ 

*/