#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int FindSecMaxIndis(const int* array,size_t size){
	int max= array[0];
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

int main(int argc, char *argv[]) {
	int arr[] = { 2700, 2000, 2350, 4, 7, 98, 3000, 120, 2400, 99, 2710 }; 
	int secmax = FindSecMaxIndis(arr,sizeof(arr) / sizeof(arr[0]));
	printf("Secmax = %d\n",secmax);
	return 0;
}


