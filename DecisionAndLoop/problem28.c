// 28. Write a C program to print all alphabets from a to z

#include<stdio.h>

int main(){
	int i = 0;
	printf("alphabets from A- Z \n");
	for(i = 0; i<26; ++i){
		printf("%c\t", 'A'+i);
	}
	printf("\n");
	printf("alphabets from a - z\n");
	for(i = 0; i<26; ++i){
		printf("%c\t", 'a'+i);
	}

	return 0;
}