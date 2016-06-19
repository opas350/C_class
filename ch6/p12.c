/* However, we are allowed to pass a pointer to the structure as an actual parameter. Look at the example on the right → , only slightly different from the previous one.

This function expects a pointer to the structure, not the structure itself. The pointer is of type struct STR *. Consequently, the function doesn't use the dot operator any more. The arrow must be used instead and the output screen will look as follows:

    2 B

*/

#include<stdio.h>

struct STR{
	int Int;
	char Char;
};

void funx(struct STR *p){

	p -> Int = 2;
	p -> Char = 'B';
}

int main(void){

	struct STR str = {1,'A'};

	funx(&str);
	printf("%d %c \n", str.Int, str.Char);
	return 0;
}
