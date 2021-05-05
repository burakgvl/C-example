#include <stdio.h>
#include <stdlib.h>

/* Cümlenin kaç sözcükten oluþtuðunu bulan program */
void HowManySentence(char* str,size_t size){
	int cnt, i = 0;
	for( ; i<size; i++){
		if(str[i] == ' ')
			cnt++;
	}
	printf("Bu cumle, %d sozcukten olusmaktadir.",cnt);
}
int main() {
	char str[] = "bu da mi gol degil ";
	HowManySentence(str,sizeof(str)/sizeof(char));
	return 0;
}
