//7. Write a C program to input week number and print week day. 

#include<stdio.h>


int main(){
	int weekInNumber;
	printf("enter a nummber between 1-7 \n");
	scanf("%d",&weekInNumber);

	switch(weekInNumber){
		case 1: printf("Monday\n");
		break;
		case 2: printf("Tuesday\n");
		break;
		case 3: printf("Wednesday\n");
		break;
		case 4: printf("Thursday\n");
		break;
		case 5: printf("Friday\n");
		break;
		case 6: printf("Saturday\n");
		break;
		case 7: printf("Sunday\n");
		break;
		default: printf("invalid choicet\n");
	}
	return 0;
}