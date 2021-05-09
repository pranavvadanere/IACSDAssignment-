//pattern
#include <stdio.h>

int main(){
	int i,j,k,l;
	int no;
	printf("enter the no of rows want to print\n");
	scanf("%d",&no);
	for(i = 0; i<= no; i++){
		for(j = no*2; j >= 0; j--){
			if(i == j)
				printf("%d\t",0);
			else if(i > j)
				printf("%d\t",i - j);
			else if( i < j && (j - i <= i))
				printf("%d\t",j - i);
			else
				printf("\t");
		}
		printf("\n");
	}
	for(i = no-1; i>=0; i--){
		for(j = no * 2; j>=0; j--){
			if(i == j)
				printf("%d\t",0);
			else if(i > j)
				printf("%d\t",i -j);
			else if(i < j && (j-i <= i))
				printf("%d\t", j-i);
			else
				printf("\t");
		}
		printf("\n");
	}
	return 0;
}

/*
output
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
enter the no of rows want to print
3 
						0	
				1	0	1	
		2	1	0	1	2	
3	2	1	0	1	2	3	
		2	1	0	1	2	
				1	0	1	
						0	
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/