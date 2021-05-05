#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE	5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int* CreateDynamicArray(size_t n){
	int* pd  = (int*) malloc(n*sizeof(int));
	if(pd == NULL){
		printf("Malloc error!..No allocation");
		EXIT_FAILURE;
	}
	int i = 0;
	for(i = 0; i<n; i++)
	{
	scanf("%d",(pd+i));
	}
	return pd;
}
 


int main(int argc, char *argv[]) {
	int *dizi = CreateDynamicArray(ARRAY_SIZE);
	int i = 0;
	for(i = 0; i<ARRAY_SIZE; i++)
	{
	printf("Dizi: %d\n",*(dizi+i));
	}
	free(dizi);
	
	return 0;
}
