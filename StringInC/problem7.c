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

/*
output
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ gcc problem7.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ ./a.out 
how many disk want to copied
4
1 disk move A to C
2 disk move A to B
1 disk move C to B
3 disk move A to C
1 disk move B to A
2 disk move B to C
1 disk move A to C
4 disk move A to B
1 disk move C to B
2 disk move C to A
1 disk move B to A
3 disk move C to B
1 disk move A to C
2 disk move A to B
1 disk move C to B
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ 


*/