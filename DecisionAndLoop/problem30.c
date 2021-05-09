#include<stdio.h>

int main(){
	int i,j,space;

	int no;
	scanf("%d",&no);

	for(i = no; i >= 1; i--){
		for(space = no; space > i;space--){
			printf(" ");
		}
		for(j = 1; j <=i;j++){
			printf("%c",123-j);
		}
		for(j = j-2; j >= 1; j--){
			printf("%c",123-j);
		}
		printf("\n");
	}
	return 0;
}

/*
output
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem30.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
 
5
zyxwvwxyz
 zyxwxyz
  zyxyz
   zyz
    z
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
10
zyxwvutsrqrstuvwxyz
 zyxwvutsrstuvwxyz
  zyxwvutstuvwxyz
   zyxwvutuvwxyz
    zyxwvuvwxyz
     zyxwvwxyz
      zyxwxyz
       zyxyz
        zyz
         z
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 


*/