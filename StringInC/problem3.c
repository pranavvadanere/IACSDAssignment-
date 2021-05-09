// Using pointers write your own functions for the following:
// a. String comparison b. String concatenate
// c. String copy
// d. String length.

#include<stdio.h>
#include<stdlib.h>
int stringComparison(char *str1, char *str2){
	int flag = 0;
	if(str1 == NULL || str2 == NULL)
		return -1;

	while(( *str1 != '\0' )&& (*str2 != '\0')){
		if(*str1 !=  *str2){
			flag = 1;
			break;
		}
		str1++;
		str2++;
	}
	if(flag == 1)
		return 1;
	else
		return 0; // 0 means equal
}

void StrcatX(char *dest, char *src){
	if(dest == NULL || src == NULL)
		return;
	while(*dest != '\0'){
		dest++;
	}

	while(*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void strCpyX(char *dest, char *src){
	if(dest == NULL || src == NULL)
		return;
	while(*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*src = '\0';
}

int strlenX(char *str){
	int count = 0;
	if(str == NULL)
		return -1;
	while(*str != '\0'){
		str++;
		count++;
	}
	return count;
}
int main(){
	int result = 0;
	int choice = 0;
	int keepLook = 1;
	char string1[20] = {'\0'};
	char string2[20] = {'\0'};

	while(keepLook){
		printf("eneter the choice from the following\n");

		printf("********************************************\n");
		printf("1. Sting comparison\n");
		printf("2. Sting concatenate\n");
		printf("3. Sting copy\n");
		printf("4. Sting length\n");
		printf("0. exit\n");
		printf("********************************************\n");

		scanf("%d",&choice);
		switch(choice){
			case 1:

			printf("eneter the string one\n");
			scanf(" %[^'\n']s",string1);
			printf("eneter the second string two\n");
			scanf(" %[^'\n']s",string2);

			result = stringComparison(string1,string2);
			if(result == 0)
				printf("strings are equal\n");
			else
				printf("string are not equal\n");

			break;

			case 2:

			printf("eneter the string one\n");
			scanf(" %[^'\n']s",string1);
			printf("eneter the second string two\n");
			scanf(" %[^'\n']s",string2);
			StrcatX(string1,string2);
			printf(" concatenate str is->  %s\n",string1);
			break;
			case 3:
			printf("eneter the string one\n");
			scanf(" %[^'\n']s",string1);
			char temp[20];
			strCpyX(temp,string1);
			printf("copied str is %s\n",temp);
			break;
			case 4:
			printf("eneter the string one\n");
			scanf(" %[^'\n']s",string1);
			printf("Length of the strign is %d",strlenX(string1));

			case 0: keepLook = 0;break;

		}

	}

	
}


/*
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ gcc problem3.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ ./a.out 
eneter the choice from the following
********************************************
1. Sting comparison
2. Sting concatenate
3. Sting copy
4. Sting length
0. exit
********************************************
1
eneter the string one
pranv
eneter the second string two
prav
string are not equal
eneter the choice from the following
********************************************
1. Sting comparison
2. Sting concatenate
3. Sting copy
4. Sting length
0. exit
********************************************
2
eneter the string one
ab
eneter the second string two
c
 concatenate str is->  abc
eneter the choice from the following
********************************************
1. Sting comparison
2. Sting concatenate
3. Sting copy
4. Sting length
0. exit
********************************************
3
eneter the string one
abc
copied str is abc
eneter the choice from the following
********************************************
1. Sting comparison
2. Sting concatenate
3. Sting copy
4. Sting length
0. exit
********************************************
4
eneter the string one
vadnere
Length of the strign is 7pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ ./a.out 
eneter the choice from the following
********************************************
1. Sting comparison
2. Sting concatenate
3. Sting copy
4. Sting length
0. exit
********************************************
0
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ 


*/