// Tower Of Honai 
// solved using recurasion 
// expectation : n disk will move to dest with the helper
//faith : n-1 disk will copied into dest with helper
// so we have to work on n disk to move

#include<stdio.h>

void toh(int no, char src,char dest,char helper){
	// printf("%c\n",helper);
	if(no == 0)
		return;
	toh(no-1,src,helper,dest);
	printf("%d disk move %c to %c\n",no,src,dest);
	toh(no-1,helper,dest,src);
}
int main(){
	int no;
	char src = '\0';
	char dest= '\0';
	char helper = '\0';
	printf("how many disk want to copied\n");
	scanf("%d",&no);
	toh(no,'A','B','C');

	return 0;
}