#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	int 	numbers[1000];
	int	i,aux;
	int	numbersread = 0;
	int	swapped;
	FILE	*inp;

	if(argc != 2) {
		printf("usage: intsort input_file\n");
		return 1;
	}
	if((inp = fopen(argv[1],"rt")) == NULL) {
		printf("Cannot open %s - %s\n",argv[1],strerror(errno));
		return 2;
	}
	while(fscanf(inp,"%d",&numbers[numbersread]) == 1) {
		numbersread++;
		if(numbersread == 1000)
			break;
	}
	fclose(inp);
	if(numbersread == 0) {
		printf("No numbers found in the files %s\n",argv[1]);
		return 3;
	}
	do {
		swapped = 0;
		for(i = 0; i < numbersread - 1; i++)
			if(numbers[i] > numbers[i + 1]) {
				swapped = 1;
				aux = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = aux;
			}
	} while(swapped);
	printf("\nThe sorted values: ");
	for(i = 0; i < numbersread; i++)
		printf("%d ",numbers[i]);
	printf("\n");
	return 0;
}
