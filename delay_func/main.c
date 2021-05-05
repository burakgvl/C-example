#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* delay functions */
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
