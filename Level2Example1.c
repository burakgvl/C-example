
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE	50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char* CreateDynamicArray(size_t n){
	char* pd = (char*) malloc(n*sizeof(int));
	if(pd == NULL){
		printf("Malloc error!..No allocation");
		EXIT_FAILURE;
	}
	pd = "99999999999999999999999999999999999999999999999991";
	return pd;
}

int main(int argc, char *argv[]) {
	int i;
	int sum = 0;
	char *num;
	num = CreateDynamicArray(ARRAY_SIZE);
	for(i = 0; i<ARRAY_SIZE; i++)
	{
	printf("Dizi: %c\n",*(num+i));
	sum+=*(num+i)-'0';
	}
	if(sum %9)
		printf("9 ile bolunmez\n");
	else
		printf("9a bolunur\n");	
	printf("Sum: %d\n",sum);
	return 0;
}
