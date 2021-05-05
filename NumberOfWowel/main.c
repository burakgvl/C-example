#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* Girilen cümlede sesli harf sayýsýný bulan fonksiyon*/
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
