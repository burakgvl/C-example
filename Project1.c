#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*3 arkada� var. 5er g�n �al���yorlar. her g�n belli miktarda 100tlye kadar bah�i� al�yorlar. bu ald�klar� bah�i�leri �ok boyutlu dizede tutacaz. Bunu matris formunda yazd�raca��z. */

void setMatrix(int (*pa)[5], size_t size){
	int i = 0;
	for(i = 0; i<size; i++){
		int j = 0;
		for(j = 0; j<5; j++){
			pa[i][j] = rand() % 100;
			//scanf("%d",&pa[i][j]);
		}
	}
}

void printMatrix(int (*pa)[5], size_t size){
	int i = 0;
	for(i = 0; i<size; i++){
		int j = 0;
		for(j = 0; j<5; j++){
			printf("%5d",pa[i][j]);
		}
		printf("\n");
	}
}

int* SumOfTip(int (*pa)[5],size_t size){
	int sum,*psum;
	int i = 0;
	for(i = 0; i<size; i++){
		int j = 0;
		sum = 0;
		for(j = 0; j<5; j++){
			sum += pa[i][j];
		}
		*(psum+i) = sum;
	}
	return psum;
}

void printMaxTip(int (*pa)[5],size_t size){
	char* days[5] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma"};
	int max = pa[0][0]; 
	int waiter,day;
	int i = 0;
	for(; i <size; i++){
		int j = 0;
		for(; j<5; j++){
			if(pa[i][j] > max){
				max = pa[i][j];
				waiter = i+1;
				day = j; 
			}
		}
	}
	printf("En cok parayi %d. garson %s gunu kazandi. Bu para %d TL'dir..",waiter,days[day],max);
}

int main(int argc, char *argv[]) {
	int arr[3][5];
	setMatrix(arr,3);
	printMatrix(arr,3);
	int *toplam = SumOfTip(arr,3);
	printf(" Toplam=%d \n",*toplam);
	printf(" Toplam=%d \n",*(toplam+1));
	printf(" Toplam=%d \n",*(toplam+2));
	printMaxTip(arr,3);
	
	return 0;
}
