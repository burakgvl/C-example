#include <stdio.h>
#include <stdlib.h>

#define asize(arr)	(sizeof(arr) / sizeof(arr[0]))

int FindMaxIndis(const int* array,size_t size){
	int max = array[0];
	while(size != 0){
		if(array[size-1] > max)
			max = array[size-1];
		size--;
	}
	return max;
}

int main() {
	int arr[] = { 1, 2222, 3, 4, 7, 98, 6, 120, 35, 994, 14 };
	int max = FindMaxIndis(arr,asize(arr));
	printf("max = %d\n",max);
	return 0;
}
