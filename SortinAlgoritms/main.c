#include <stdio.h>
#include <stdlib.h>

#define SizeArr(arr)	sizeof(arr) / sizeof(arr[0])

void SelectionSort(int* array, size_t size){
	int min;
	size_t i,j;
	for(i = 0; i<size; i++){
		min = i;
		for(j = i+1; j<size; j++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}

void BubbleSort(int* arr, size_t size){
	size_t i,j;
	for(i = 0; i<size-1; i++){
		for(j = 0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}




int main() {

	int dizi[8] = {12,4,6,9,43,56,78,61};
	SelectionSort(dizi,SizeArr(dizi));
	int j;
	for(j = 0; j<8; j++){
		printf("Dizi[%d] = %d \n",j,dizi[j]);
	}
    return 0;
}
