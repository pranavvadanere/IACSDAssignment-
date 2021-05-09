// Write a program to sort a number of strings using bubble sort. Input is a number of strings and
// the output is the sorted list based on the length of strings.
// For e.g.: If input is jyoti, sareeka, anisha, sangita, savita, suja

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

void swap(char**,char**);

int main(){

	printf("enter the no of string \n");
	int no;
	scanf("%d",&no);
	char* arr[no];
	char a[20];
	int l,i;
	char* x;
	printf("enter the names\n");
	for (i = 0; i < no; i++) {
    scanf(" %[^'\n']s", a); // taking values in char array
    l = strlen(a);
    // used malloc to allocate dynamic memory. l+1 to store "\0".
    x = (char *)malloc(l + 1);
    strcpy(x, a);
    arr[i] = x;
  }


	for(int i = 0; i < no -1 ; i++){
		for(int j = 0; j < no -1; j++){
			int size1 = (int) strlen(arr[j]);
			int size2 = (int) strlen(arr[j+1]);
			if(size1> size2){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}

printf("\noutput\n");
	for(int i =0; i < no; i++){
		printf("%s\n",arr[i]);
	}
}
void swap(char** ptr1, char** ptr2){
		char* temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
	}

	/*
	output
	enter the no of string 
5
enter the names
pranav
pranav vadnere
pran  
rucha
jeevan 

output
pran
rucha
pranav
jeevan
pranav vadnere
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/StringInC$ 

	*/


/*
prachi mam code

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ** ptop;
    int noofnames;
    char name[20];
    int i;

printf("Enter no of strings: ");
scanf("%d",&noofnames);

ptop=(char **)malloc(noofnames*sizeof(char*));

for(i=0;i<noofnames;i++)
{
    printf("enter your name:");
    scanf(" %[^'\n']s",name);
    ptop[i]=(char *)malloc(strlen(name)+1);
    strcpy(ptop[i],name);

}
return 0;

// getch();

}
*/