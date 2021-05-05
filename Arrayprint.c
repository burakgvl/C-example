#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void PrintArray(int* array,size_t size){
	int i = 0;
	for(; i<size; i++){
		printf("Array = %d\n",array[i]);
	}
}


int main(int argc, char *argv[]) {
	int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 }; 
	PrintArray(arr,sizeof(arr) / sizeof(arr[0]));
	return 0;
}
