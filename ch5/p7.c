#include <stdio.h>

int main(void) {
	
	union {
		int a;
		float b;
	} Data;

        scanf("%d", &Data.a);
	printf("\n%f\n", Data.b);
	return 0;
}
