#include<stdio.h>

void main(void)
{

	int i,j,k;

	i=3;
	j=-3;
	k=i*j;

	printf("\n %d \n",k);

	k+=j;
	printf("\n %d \n",k);
	k/=i;

	printf("\n %d \n",k);

	return 0;
}
