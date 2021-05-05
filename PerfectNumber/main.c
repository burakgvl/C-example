#include <stdio.h>
#include <stdlib.h>

int main() {
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
