//11. Write a C program to print all natural numbers from 1 to n. - using while loop 

#include <stdio.h>

int main(){
	int no;
	int i = 1;
	printf("enter a number\n");
	scanf("%d",&no);

	while(i <= no){
		printf("%d\n",i);
		i++;
	}
	return 0;
}
/*
output
ranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
20
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 



*/