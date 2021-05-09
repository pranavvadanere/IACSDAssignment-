// 6. Write a C program to check whether a character is uppercase or lowercase alphabet. 

#include<stdio.h>

int main(){
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);

	if(ch >='A' && ch <='Z'){
		printf("character %c is uppercase\n",ch);
	}else{
		printf("character %c is lowercase\n",ch);
	}
	return 0;
}

/*
OUTPUT:

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
1634
YES,its armstrong number
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
153
YES,its armstrong number
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
121
NO, Its not armstrong number 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/