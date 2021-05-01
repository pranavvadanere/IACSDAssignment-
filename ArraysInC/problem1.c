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