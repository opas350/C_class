/*We want the hello function to be more verbose and to print its joyful message twice. We will use the for loop for this task. We will need  a control variable so we add the int i; declaration at the beginning of the function block

The i variable is recognized only inside the hello function's block and nowhere else. 

If you need to have another variable of the same name but inside the main function you can declare it there without any obstacles.

Each of the functions have their own i variable. The variables exist separately and have nothing in common. */

#include <stdio.h>

void hello(void){

	int i;

	for (i=0;i<2;i++)	
		printf("You've invoked me \n");
	return;
	
}


int main(void){
	int i;
	
	printf("You are about to invoke hello \n");
	for(i=0;i<3;i++)
		hello();
	printf("We returned from hello");
	return;
}
