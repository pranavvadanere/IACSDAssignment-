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