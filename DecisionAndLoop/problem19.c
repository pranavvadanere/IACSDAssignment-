// 19. Write a C program to find all factors of a number.

#include<stdio.h>

void printFactors(int no){
	int i ;
	for(i = 1; i <= no; ++i){
		if(no % i == 0)
			printf("%d\n",i);
	}
}
int main(){
	int no;
	printf("enter a number to find a factors\n");
	scanf("%d",&no);
	printFactors(no);
	return 0;
}

/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem19.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number to find a factors
12
1
2
3
4
6
12
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number to find a factors
6
1
2
3
6
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/