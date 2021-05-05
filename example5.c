#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number,result=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	int i;
	for(i=1; i<=number/2; i++){
		if(number %i == 0 && number%i != 6){
			result += i;
		}
	}
	if(result == number)
		printf("Number is perfect");
	else
		printf("Not perfect");
	return 0;
}
