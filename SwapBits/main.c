/*
 *  Bir fonksiyon yazalým. Bu fonksiyon bir baytýn istenilen iki bitinin yerini deðiþtirsin.
 */
#include <stdio.h>

int SwapBits(unsigned int, char,char);

int main ()
{
	unsigned int num;
	printf("Enter an unsigned number:");
	scanf("%d",&num);
	printf("Firs data value: 0x%X \n",num);
	unsigned int num2 = SwapBits(num,1,2);
	printf("After swapping the bits, data value : 0x%X \n",num2);
	return 0;
}


int SwapBits(unsigned int num, char swpBit1,char swpBit2){

	char bit1 = (num>>swpBit1) & 1;
	char bit2 = (num>>swpBit2) & 1;
	char XorBits = bit1 ^ bit2;

	return num ^= (XorBits << swpBit1 | XorBits << swpBit2);
	/*
	*---Both the same:
	*  (num ^= (XorBits << swpBit1)) | (num^=(XorBits << swpBit2))
	*	num ^= (XorBits << swpBit1 | XorBits << swpBit2)
	*/

}

