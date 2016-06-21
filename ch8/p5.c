#include	<stdio.h>
#define	SIZE		100

int main(void) {
	int	array[SIZE];

#if SIZE < 1000
	puts("The array is not so large");
#else
	puts("The array is "
#if SIZE > 10000
	"very "
#endif
	"large ");
#endif
	return 0;
}
