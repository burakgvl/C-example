#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int NumberOfWowel(){
	int ch;
	int count;
	while((ch = getchar()) != '\n'){
		switch(tolower(ch)){
			case 'a': case 'e': case 'i': case 'o': case 'u':
				++count;
				break;
			default:
				break;		
	}	
	}
	printf("%d",count);
}


int main(int argc, char *argv[]) {
	NumberOfWowel();
	return 0;
}
