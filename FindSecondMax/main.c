#include <stdio.h>
#include <stdlib.h>

//Dizinin maksimum ikinci elemanýný bulan fonksiyon

#define asize(arr)  sizeof(arr) / sizeof(arr[0])
int FindSecMaxIndis(const int* array,size_t size){
	int max= 0;
	int secMax = 0;
	while(size != 0){
		if(array[size-1] > max)
		{
			secMax = max;
			max = array[size-1];
		}
		else if(array[size-1]>secMax)
		{
			secMax = array[size-1];
		}
		--size;
	}
	return secMax;
}

int main() {
	int arr[] = { 10,15,22,3,4,5,6,7,16,9 };
	int secmax = FindSecMaxIndis(arr,asize(arr));
	printf("Secmax = %d\n",secmax);
	return 0;
}

