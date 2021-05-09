// 10. Write a C program to invert the case of alphabet. 

#include <stdio.h>

int main(){
	char ch;
	printf("enter a character \n");
	scanf(" %c",&ch);

	if(ch >= 'A' && ch <='Z'){
		ch = 'a' + (ch - 'A');
	}else if(ch >= 'a' && ch <='z'){
		ch = 'A' + (ch - 'a');
	}else{
		printf("invalid char\n");
	}
	printf("%c\n",ch );
	return 0;
}

/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem10.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a character 
a
A
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a character 
A
a
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/