#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void delay(int seconds){
	clock_t start = clock();
	while((double)(clock()-start)/CLOCKS_PER_SEC < seconds);
	
}
int main(int argc, char *argv[]) {
	printf("Start\n");
	delay(5);
	printf("Stop.");
	return 0;
}
