//Write a C program to count total number of notes in given amount. 

#include<stdio.h>

int main(){
	int amount = 0;
	int note2000 = 0, note500 = 0, note200 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2= 0, note1= 0;

	printf("enter a amount \n");
	scanf("%d",&amount);


	if(amount >= 2000){
		note2000 =  amount /2000;
		amount = amount - (note2000 * 2000);
	}
	if(amount >=500){
		note500 = amount / 500;
		amount = amount - (note500 * 500);
	}

	if(amount >=200){
		note200 = amount /200;
		amount = amount - (note200 * 200);
	}
	if(amount >=100){
		note100 = amount / 100;
		amount = amount - (note100 * 100);
	}
	if(amount >= 50){
		note50 = amount / 50;
		amount = amount - (note50 * 50);
	}
	if(amount >= 20){
		note20 = amount / 20;
		amount = amount -(note20 * 20);
	}
	if(amount >= 10){
		note10 = amount / 10;
		amount = amount - (note10 * 10);
	}
	if (amount >= 5){
		note5 = amount / 5;
		amount = amount - (note10 * 5);
	}
	if (amount >= 2){
		note2 = amount / 2;
		amount = amount - (note2 * 2);
	}
	if (amount >=1){
		note1 = amount;
	}


	printf("*************Total number of Notes **************\n");
	printf("2000  = %d\n",note2000);
	printf("500  = %d\n",note500);
	printf("200  = %d\n",note200 );
	printf("100  = %d\n",note100 );
	printf("50  = %d\n",note50);
	printf("20  = %d\n",note20);
	printf("10  = %d\n",note10);
	printf("5  = %d\n", note5);
	printf("2  = %d\n", note2);
	printf("1  = %d\n", note1);
	printf("**************************************************\n");
	return 0;
}