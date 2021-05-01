
/*
Write a C program to input angles of a triangle and check whether triangle is valid or not.
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
	int angle1 = 0,angle2 = 0,angle3= 0;
	printf("enter first angle\n");
	scanf("%d",&angle1);

	printf("enter second angle\n");
	scanf("%d",&angle2);
	
	printf("enter third angle\n");
	scanf("%d",&angle3);

	if(angle3 + angle2 + angle1 == 180)
		printf("its valid triangle\n");
	else
		printf("its not valid triangle\n");
	return 0;
}