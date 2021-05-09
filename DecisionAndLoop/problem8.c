
// 8. Write a C program to input month number and print number of days in that month. 

#include<stdio.h>

int main(){
	int month = 0;
	printf("enter a month betweeen 1- 12\n");
	scanf("%d",&month);
// 1 3 5 7 8 10 12 -> 31
// 4 6 9 11 -> 30
	if(
		month == 1 || 
		month == 3 || 
		month == 5 || 
		month == 7 || 
		month == 8 || 
		month == 10|| 
		month == 12
		){
		printf("31 days\n");
	}else if(month == 4 || 
		month == 6 || 
		month == 9 || 
		month == 11
		){
		printf("30 days \n");
	}else if(month == 2){
		printf("28 days or 29 days\n");
	}else{
		printf("invalid choice\n");
	}
	return 0;
}

/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem8.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a month betweeen 1- 12
12
31 days
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a month betweeen 1- 12
3
31 days
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a month betweeen 1- 12
1
31 days
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a month betweeen 1- 12
2
28 days or 29 days
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/