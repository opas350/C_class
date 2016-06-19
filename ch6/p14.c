#include<stdio.h>

void print(int a[]){
	int i;
	for(i =0; i<5; i++)
	printf("%d",a[i]);
	printf("\n");
}

void mul2(int *arrptr){
	int i;

	for(i=0;i<5;i++)
	    arrptr[i] *=2;
}

int main(void){

	int arr[5]={1,2,3,4,5};
	int i;

	print(arr);
	mul2(arr);
	print(arr);

	return 0;
}
