// 28. Write a C program to print all alphabets from a to z

#include<stdio.h>

int main(){
	int i = 0;
	printf("alphabets from A- Z \n");
	for(i = 0; i<26; ++i){
		printf("%c\t", 'A'+i);
	}
	printf("\n");
	printf("alphabets from a - z\n");
	for(i = 0; i<26; ++i){
		printf("%c\t", 'a'+i);
	}

	return 0;
}

/*
output
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ gcc problem28.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ ./a.out 
alphabets from A- Z 
A	B	C	D	E	F	G	H	I	JK	L	M	N	O	P	Q	R	S	TU	V	W	X	Y	Z	
alphabets from a - z
a	b	c	d	e	f	g	h	i	jk	l	m	n	o	p	q	r	s	tu	v	w	x	y	z	
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/DecisionAndLoop$ 

*/