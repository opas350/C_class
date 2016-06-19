/* There is a convention commonly accepted in the Unix world (and not only there) that a program launched with the -v  option should output information about its version and then terminate immediately. The same program launched without any arguments should inform the user about how the program has to be used. Let's try to make our args program satisfying this convention →

Notice how the different results returned by the main function signal the reason of the program termination.

*/

#include<stdio.h>

int main(int argc, char *atgv[]){
	int i;
	if(argc == 1){
		printf("usage: args arg1 arg2 arg3 ... \n");
		return 1;
	}

if(argc == 2 && strcmp(argv[1],"-v") == 0){
	
	printf("args version 1.0, C language example \n");
	return 2;
}

	for(i=0;i<argc;i++)
	printf("%s \n",argv[2]);
	return 0;
}
