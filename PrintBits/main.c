#include <stdio.h>
#include <stdlib.h>
/*
10000000	00000000	00000000	00000000 	= mask
00000000	00000000	00000000	00001010 	= number
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printBits(unsigned int val)
{
	unsigned int mask = 1<<31;
	size_t i;
	for(i = 1; i<=32; i++){
		putchar(val&mask? '1' : '0');
		val<<=1;

		if(i % 8 == 0)
			putchar('\t');
	}
}

unsigned int value;

int main(int argc, char *argv[]) {
	printBits(10);

	return 0;
}
