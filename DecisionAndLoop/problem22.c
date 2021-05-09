// LCM of 2 no
#include <stdio.h>

int main(){
	int a= 0, b= 0, max = 0,step = 0;
	int lcm = 0;
	printf("enter a value of a and b\n");
	scanf("%d %d",&a,&b);

	if(a > b)
		max = step =a;
	else
		max = step = b;

	while(1){
		if(max % a == 0 && max % b == 0){
			lcm = max;
			break;
		}
		max = max+step;
	}
	printf("LCM of %d and %d is  %d \n",a,b,lcm);
	return 0;
}

/*
OUTPUT
ranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem22.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a value of a and b
10 20
LCM of 10 and 20 is  20 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a value of a and b
12 
50
LCM of 12 and 50 is  300 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/