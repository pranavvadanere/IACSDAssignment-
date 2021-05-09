/*Write a program to create an array of integers and perform following operations on that array like
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the
array from user.*/

#include<stdio.h>
#include<stdlib.h>

int findSum(int * ptr, int size){
	//code
	int i, sum = 0;

	for(i = 0; i < size; ++i){
		sum+=ptr[i];
	}
	return sum;
}
float findAverage(int * ptr, int size){
	int sum = 0,i;
	float average = 0.0f;

	for (i = 0; i < size; ++i){
		sum+=ptr[i];
	}
	average = (float)sum / (float)size;
	return average;
}
int findMax(int * ptr, int size){
	int max = ptr[0], i;
	for(i = 1; i < size; ++i){
		if(max < ptr[i])
			max = ptr[i];
	}
	return max;
}
int findMin(int *ptr, int size){
	//code
	int i;
	int min = ptr[0];
	for(i = 1; i < size; ++i){
		if(min > ptr[i])
			min = ptr[i];
	}
	return min;
}

int main(){
	int n,i;
	int * ptr = NULL;
	printf("enter a size of array\n");
	scanf("%d",&n);
	ptr = (int*)malloc(sizeof(int) * n);

	if(ptr == NULL){
		printf("size is not allocated to array\n");
		return 0;
	}

	printf("enter elements of array\n"); 

	for(i = 0; i < n; ++i){
		scanf("%d",ptr+i);
	}
	printf("%d\n",findSum(ptr,n));
	printf("%f\n",findAverage(ptr,n));
	printf("%d\n",findMax(ptr,n));
	printf("%d\n",findMin(ptr,n));

	return 0;
}
/*
enter a size of array
5
enter elements of array
1 2 3 4 5
15
3.000000
5
1
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ ^C
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ 
*/