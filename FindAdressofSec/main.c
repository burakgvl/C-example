#include <stdio.h>
#include <stdlib.h>

/* Dizinin 2. en büyük elemanýnýn adersini döndüren fonksiyon*/

int *FindSecMaxIndis( int* pArray,size_t size){
	int temp = 0;
	int *pmax= &temp;
	int *psecMax = &temp;
	int i = 0;
	for(; i <size; i++){
		if(*(pArray+i) > *pmax)
		{
		    psecMax = pmax;
			pmax = pArray+i;
		}
		else if(*(pArray+i) > *psecMax)
		{
			psecMax = pArray+i;
		}
	}
	return psecMax;
}

int main(int argc, char *argv[]) {
	int arr[] = { 25,16,17,18,19,20,6,7,8,9,12 };
	int *secmax = FindSecMaxIndis(arr,sizeof(arr) / sizeof(arr[0]));
	printf("Secmax adress=%X \n Sexmax value:%d",secmax,*secmax);
	return 0;
}


