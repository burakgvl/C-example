#include <stdio.h>
#include <stdlib.h>

#define SizeArr(arr)	sizeof(arr) / sizeof(arr[0])

void BubbleSort(int* arr ,size_t size){
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
void printArr(int* arr, size_t size){
	int i;
	for(i = 0; i<size; i++){
		printf("%d ",arr[i]);
	}
}
struct Buildings{
	int position[8];
	int height[8];
	int width[8];
}Apartments;


int main(int argc, char *argv[]) {
	
    FILE *f = fopen("girdi.txt","r");
    if(f == NULL)
    {
        printf("Dosya acilamadi!!");
        return 1;
    }

    int i = 0;
	for(i = 0; i<8; i++){
		fscanf(f,"%d\t%d\t%d",Apartments.position+i,Apartments.height+i,Apartments.width+i );
		printf("%d \t %d \t %d \n",Apartments.position[i],Apartments.height[i],Apartments.width[i]);
	}
	BubbleSort(Apartments.position,8);
	
	
    return 0;
}
