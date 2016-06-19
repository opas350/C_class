/* The structures are always passed by value – just like scalars. This means that the following program → will output the text:

     1 A

That is, fields of the str structure remain unchanged after the fun invocation.

*/
#include<stdio.h>

struct STR{
	int Int;
	char Char;
};

void fun(struct STR s){

	s.Int = 2;
	s.Char = 'B';
}

int main(void){

	struct STR str = {1,'A'};

	fun(str);
	printf("%d %c \n",str.Int,str.Char);

	return 0;
}
