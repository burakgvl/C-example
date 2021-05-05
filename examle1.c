#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	while(sayi != 0){
	putchar(sayi%10 + '0');
	sayi /= 10;	
	}
	return 0;
}
