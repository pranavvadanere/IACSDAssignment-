// Write a program to cyclically permute a string one character at a time.
// E.g.: If space is the input the output should produce

#include<stdio.h>
#include <string.h>

void cyclicallyPermuteStr(char str[]){
	int len = strlen(str);
	char temp[len];

	for(int i = 0; i < len;i++){
		int j = i;
		int k = 0;
		while(str[j] != '\0'){
			temp[k] = str[j];
			k++;
			j++; 
		}
		j = 0;
		while(j < i){
			temp[k] = str[j];
			j++;
			k++;
		}
		printf("%s\n",temp);
	}
}

int main(){
	char arr[20] = {'\0'};
	printf("enter a string \n");
	scanf("%[^'\n']s",arr);
	
	cyclicallyPermuteStr(arr);
	return 0;
}