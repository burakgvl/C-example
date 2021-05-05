/*
 *  Tam sayının bitsel gösteriminde sondan kaç bitinin 0 olduğunu gösteren program.
 */
#include <stdio.h>

int main ()
{
	int num, i=0, cnt=0;
	printf("Enter a number:");
	scanf("%d",&num);

	while(!((num>>i)&1)){
		cnt++;
		i++;
	}

	printf("Sondan %d biti 0.. \n",cnt);
}


