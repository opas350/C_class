#include<stdio.h>

void hello(void){
	printf("You've invoked me \n");
	return;

}


int main(void){

	printf("We are about to invoke hello()\n");
	hello();
	return;

}
