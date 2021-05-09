/*
Accept a number and display it multiplication table.
*/

#include <stdio.h>

int main(){
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i = 1; i <= 10; ++i){
		printf("%dX%d= %d\n",n,i,n*i);
	}
	return 0;
}

/*
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem3.c -o myexe
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./myexe 
enter a number
5
5X1= 5
5X2= 10
5X3= 15
5X4= 20
5X5= 25
5X6= 30
5X7= 35
5X8= 40
5X9= 45
5X10= 50
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/