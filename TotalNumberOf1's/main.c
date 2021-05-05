/*
 *  Burada yaz�lan fonksiyon, say�n�n bitlerinde ka� adet 1 oldu�unu d�nd�r�r.
 */
#include <stdio.h>

int main ()
{
	int num;
	printf("Enter an unsigned number:");
	scanf("%d",&num);
	printf("\nTotal number of 1's are : %d\n",count1s(num));
	return 0;
}

int count1s(unsigned int data)
{
    char totalBits = sizeof(data) * 8;
    char i, cnt = 0;

    for (i = 0; i <totalBits; i++)
    {
    	if(data & (1<<i) )
    		cnt++;
    }
	return cnt;
}


