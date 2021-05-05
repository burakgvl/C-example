/*
 *  Bir tamsayıyı saklamak için gerekli minimum bit sayısını bulan program?
 */
#include <stdio.h>


unsigned int num;

int main ()
{

	printf("Enter an unsigned number:");
	scanf("%d",&num);

	int i, cnt=0;
	for(i=0; i<32; i++){
		if(num&(1<<i))
			cnt=i;
	}
	printf("Total number of bits required = %d\n",++cnt);
	return 0;
}
