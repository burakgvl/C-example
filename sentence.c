#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void HowManySentence(char* str,size_t size){
	int cnt, i = 0;
	for( ; i<size; i++){
		if(str[i] == ' ')
			cnt++;	
	}
	printf("Bu cumle, %d sozcukten olusmaktadir.",cnt); 
}
int main(int argc, char *argv[]) {
	char str[] = "bu da mi gol degil ";
	HowManySentence(str,sizeof(str)/sizeof(char));
	return 0;
}
