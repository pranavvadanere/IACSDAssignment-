#include <stdio.h>

int main(){
	int sum = 0;

	while(no != 0){
		lastdigit = no % 10;
		sum+=lastdigit;
		no/=10;
	}
	printf("%d\n"sum);
}