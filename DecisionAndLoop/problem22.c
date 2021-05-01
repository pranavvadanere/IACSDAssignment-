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