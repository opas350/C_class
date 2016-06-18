/* However, we can deal with this limitation using pointers. This is how the scanf function works when it has to get the value from the user and assign it to the variable. Take a look at the program here
*/

#include<stdio.h>

void functionx(int *ptr){
	*ptr = *ptr +100;
}

int main(void){

	int i = 100;
	int *p=&i;

	printf("i=%d \n",i);
	functionx(p);
	printf("i=%d \n",i);

	return 0;
}	
