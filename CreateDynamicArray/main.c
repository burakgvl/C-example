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

void PrintArray(int* array,size_t size){
	int i = 0;
	for(; i<size; i++){
		printf("Array = %d\n",array[i]);
	}
}


int main(int argc, char *argv[]) {
	int *dizi = CreateDynamicArray(ARRAY_SIZE);
    PrintArray(dizi,ARRAY_SIZE);
	free(dizi);
	return 0;
}
