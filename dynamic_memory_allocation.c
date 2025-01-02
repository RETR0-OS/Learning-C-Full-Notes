#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Dynamic memory allocation allows for changing the memory requirements of a datastructre within runtime of a program.
//It helps expand data structures in case of extra need and helpos shrinjk them incase the memory requirement reduces over time.

void main(){
	//malloc() function
	//Part of stdlib.h header file.
	//stands "memory allocation". Allocates a certain amount of memory in terms of bytes.
	//Takes number of bytes to be allocated as argument and returns a pointer of type void.
	//In case the memory requirement exceeds the free memory, NULL is returned.
	//this void pointer can be type casted, as needed.
	int *ptr;
	ptr = (int*)malloc(5 * sizeof(int)); //returns a pointer, type casted to integer, such that the space is 5 times that occupied by an integer.
	
	for(int i=0; i<5; i++){
		ptr[i] = i+1;
	}
	for(int i=0; i<5; i++){
		printf("%d\n",ptr[i]);
	}
	
	
	//calloc() function
	//Part of stdlib.h
	//stands for "continuous allocation". Allocates memory in bytes in CONTINUOUS MEMORY BLOCKS.
	//Takes number of locations to be allocated, and the size of each location as argument. It returns a pointer of type void. 
	//Initializes all the values of the memory blocks as 0.
	//In case the memory requirement exceeds the free memory, NULL is returned.
	//this void pointer can be type casted, as needed.
	
	float *floatptr;
	floatptr = (float*)calloc(5, sizeof(float));
	
	for(int i=0; i<5; i++){
		floatptr[i] = i+1;
	}
	for(int i=0; i<5; i++){
		printf("%.2f\n",floatptr[i]);
	}
	
	printf("\n");
	
	//free() function
	//used to free up the unused memory allocated using malloc() and calloc() functions.
	free(ptr); //frees up the memory used by ptr. Since we are no longer using it, we'll free it.
	//this also allows reassignment of ptr to a new memory locaiton
	ptr = (int*)malloc(2*sizeof(int));
	
	for (int i=0; i<2; i++){
		ptr[i] = 2*(i+1);
	}	
	for (int i=0; i<2; i++){
		printf("%d\n", ptr[i]);
	}
	
	printf("\n");
	
	
	//realloc() function
	//stands for "reallocation". Allows to change the memory reserved by a pointer earlier in the program. It uses the same pointer and size, instead of having to redefine a new memory pointer and freeing the old one.
	//Syntax: ptr = realloc(ptr, <newSize>);
	
	ptr = realloc(ptr, 10*sizeof(int)); //changes the size of the ptr variable to have 10 integers
	for (int i=2; i<10; i++){
		ptr[i] = 2*(i+1);
	}	
	for (int i=0; i<10; i++){
		printf("%d\n", ptr[i]);
	}
	
}
