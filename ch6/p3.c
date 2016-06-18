/* If the variable is declared outside of all blocks it becomes the  so-called global variable. 

The global variable is accessible to all functions in a source file. In contrast, variables declared inside a function are called local variables. 

Please, consider carefully the following example →

It will help you understand the operation of both kinds of variables.

This is how it works.

the program begins with the declaration of a global variable – it is truly global because it is outside of any function; this implies that the variable is accessible to all functions declared in the source file;
the local variable which is declared within the fun function is known only in this function and has nothing to do with the variable of the same name declared inside the main function;
We may expect that the following text will be sent to the screen:

      main: local=1 global=1
     fun: local=2 global=2
     main: local=1 global=3

*/

#include<stdio.h>

int global;

void fun(void){
	int local;

	local = 2;
	global++;
	printf("fun: local=%d  global=%d \n",local,global);
	global++;
	}

int main(void){
	int local;

	local = 1;
	global =1;
	printf("main: local=%d  global=%d \n",local,global);
	fun();	
	printf("main: local=%d  global=%d \n",local,global);
	return 0;
}
