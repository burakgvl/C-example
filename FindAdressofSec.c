#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int *FindSecMaxIndis( int* pArray,size_t size){
	int *pmax= pArray;
	int *psecMax = pArray+1;
	int i = 0;
	for(; i <size; i++){
		if(*pArray+i > *pmax)
		{
			pmax = pArray+i;			
		}
		else if(*pArray+i > *psecMax)
		{
			psecMax = pArray+i;
		}
	}
	return psecMax;
}

int main(int argc, char *argv[]) {
	int arr[] = { 2700, 2000, 2350, 4, 7, 98, 3000, 120, 2400, 99, 2710 }; 
	int *secmax = FindSecMaxIndis(arr,sizeof(arr) / sizeof(arr[0]));
	printf("Secmax = %d\n",*secmax);
	return 0;
}


