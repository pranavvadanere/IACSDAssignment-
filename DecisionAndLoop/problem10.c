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