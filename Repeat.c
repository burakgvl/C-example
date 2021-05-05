#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void MaxRepeatingElements(const int* array, size_t size){
	int cnt = 0, cntMax = 0, num;
	while(size != 0){
		int i = 0;
		cnt = 0;
		for(i = 0; i <size; i++){
			if(array[i] == array[size-1])
				++cnt;
		}
		if(cnt>cntMax){
			cntMax = cnt;
			num = array[size-1];
		}
		--size;
	} 
	printf("En cok tekrar eden eleman: %d \n",num);
	printf("Tekrar etme sayisi: %d \n",cntMax);
}


int main(int argc, char *argv[]) {
	int arr[] = { 5,5,5,5,6,9,7,12,45,12,7,9,12,4,6,12,12,5 }; 
	MaxRepeatingElements(arr,sizeof(arr) / sizeof(arr[0]));
	return 0;
}
