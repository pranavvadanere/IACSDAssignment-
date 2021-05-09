// Find all odd and even no.'s in runtime array?
#include<stdio.h>
#include <stdlib.h>

void printOddEven(int* ptr,int size){

////////////////////////////////////////////////////////////////////
//
//  Function Name :         printOddEven
//  Input :                 integer pointer, int size
//  Output :                print odd and even
//  Description:            it used to print odd and even from array
//  Date :                  27 April 2021
//  Author name :           Pranav Vadanere
///////////////////////////////////////////////////////////////////

		int i;
		if(ptr == NULL){
			printf("array is empty please provide correct array\n");
			return;
		}
		for(i = 0; i < size; i++){
			if(ptr[i] % 2 == 0){
				printf("%d at index %d is even\n",*(ptr+i), i );
			}
			else{
				printf("%d at index %d is odd\n",*(ptr+i),i);
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
	printOddEven(ptr,n);

	return 0;
}


/*
OUTPUT : 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ subl problem1.C
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ gcc problem1.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ ./a.out
enter a size of array
5
enter a elements in array 
1 2 3 4 5
1 at index 0 is odd
2 at index 1 is even
3 at index 2 is odd
4 at index 3 is even
5 at index 4 is odd
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ 


*/