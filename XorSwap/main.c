/*
*   Fazladan deðiþken oluþturmadan Xor operatoruyle swap iþlemi
*/
#include <stdio.h>
void XorSwap(int *x, int *y);

int x,y;

int main()
{
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);

    printf("Before swapping: x=%d, y=%d\n",x,y);
    XorSwap(&x,&y);
    printf("After swapping:  x=%d, y=%d\n",x,y);

    return 0;
}

void XorSwap(int *x,int *y)
{
    *x  =   *x ^ *y;
    *y  =   *x ^ *y;
    *x  =   *x ^ *y;
}
