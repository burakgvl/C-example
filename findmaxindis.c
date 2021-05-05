#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int FindMaxIndis(const int* array,size_t size){
	int max = array[0];
	while(size != 0){
		if(array[size-1] < max)
			max = array[size-1];		
		size--;
	}
	return max;
}

int main(int argc, char *argv[]) {
	int arr[] = { 1, 2, 3, 4, 7, 98, 6, 120, 35, 99, 14 }; 
	int max = FindMaxIndis(arr,sizeof(arr) / sizeof(arr[0]));
	printf("max = %d\n",max);
	return 0;
}
