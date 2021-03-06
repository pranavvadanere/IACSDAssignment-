/*program to check no is armstrong or not*/
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#include<stdio.h>
BOOL checkArmstrong(int n){
	int temp = n;
	int digitCnt = 0;
	while(temp != 0){
		digitCnt++;
		temp/=10;
	}
	int last_digit = 0,power = 1;
	int original = n; 
	int res = 0;
	while(n != 0){
		last_digit = n % 10;
		for(int i = 1;i <= digitCnt; i++){
			power = power * last_digit;
		}
		res += power;
		n/=10;
		power = 1;
	}
	if(original == res)
		return TRUE;
	else
		return FALSE;
}

int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	checkArmstrong(n);
	BOOL res = checkArmstrong(n);
	if(res == TRUE){
		printf("YES,its armstrong number\n");
	}else{
		printf("NO, Its not armstrong number \n");
	}
	return 0;
}

/*
output

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
1634
YES,its armstrong number
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
153
YES,its armstrong number
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter a number
121
NO, Its not armstrong number 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/