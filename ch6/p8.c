/* What happens if the function changes the value of the formal parameter? It is always possible. In other words, what will the following program emit to the screen? →

function2 not only prints its only parameter but modifies (increments) it. Does it mean that the function modifies not only the param parameter but thereby also the value of variable? Nothing is further from the truth – the program will emit the following text:

     I've received value 111
     variable=111
*/

#include<stdio.h>

void function2(int param){

	printf("I've received value %d \n",param);
	param++;
}

int main(void){

	int variable = 111;

	function2(variable);
	printf("variable %d \n",variable);
	return 0;

}



	
