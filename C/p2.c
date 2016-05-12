#include <stdio.h>

int main(void)
{
	int varint;
	int x;
	char varchar;
	float varfloat;

	varint = 2012;
	varchar = 'r';
	varfloat = 3.1415;

	x=1/2*3;
	printf("%d",x);
	printf("The Year is %d. The radius is denoted as %c while Pi to %f \n",varint, varchar,varfloat);
	
	return 0;

}
