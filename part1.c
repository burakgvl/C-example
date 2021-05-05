#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Gym
{
	int start;
	int end;
}Gym;

Gym times[] = {{420,480},{480,600},{555,620},{660,735},{741,825},{795,945},{1170,1320},{1260,1380}};
Gym nesne = {61,1461};

int main(int argc, char *argv[]) {
	printf("%d",nesne.end);
	return 0;
}
