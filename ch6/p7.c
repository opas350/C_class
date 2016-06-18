/* We already know that actual parameter values are assigned to formal parameters during the function invocation which means that execution of the exhibited program → will send the following text to the screen:

     I've received value 1000
     I've received value 111
     I've received value 1111
*/

#include<stdio.h>

void function(int param){
	printf("I've received value %d \n",param);
}

int main(void){
	int variable = 111l;

	function(1000);
	function(variable);
	function(variable + 1000);
	
	return 0;
}	
