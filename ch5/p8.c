

struct ELEMENT{

	int value;
	struct ELEMENT *next;
	};

struct ELEMENT *head, *ptr;

/* The one-way linked list is created here
   we don't know yet how it was done
   we only know that the head points to element #1 */

ptr = headl

/* ptr points to the first element now; we will move it through all elements
   until we reach the end */

while(ptr !=NULL){
	/* print the value stored in the element */
	printf("value = %d \n", ptr -> value);

	/* move ptr to the next element */
	ptr = ptr -> next;
}

printf("done!");
