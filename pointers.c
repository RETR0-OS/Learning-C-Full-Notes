#include <stdlib.h>
#include <stdio.h>

void square(int n);
void square_by_reference(int *n);

//Pointers in C correspond to variables that store memory addresses.

void main(){
	//Syntax to store memory addresses (pointers) is different from a standard variable
	int age = 23;
	int *ptr = &age; //this line defines a pointer called "ptr". ptr points to the address of the variable age.
	//The * operator is the "value at address" operator.
	//The & operator is the "address of" operator.
	printf("The memory address of age is: %p\n", &age); //%p is the format specifier used to print a Hexadecimal pointer address.
	printf("The memory address of age is: %p\n", ptr);
	printf("The memory address of age is: %u\n", &age); //%u is the format specifier used to print an unsigned integer.
	int _age = *ptr; //this line put the "value at" the address stored by ptr to the variable _age.
	printf("The value at this memory address of age is: %d\n", _age);
	
	//the datatype of the pointer is controlled by the datatype of the variable being stored in the pointer.
	
	
	//Pointer to Pointer
	//Some pointers store the addresses of another pointer. Such a case is called pointer to pointer
	// add(var) --> Pointer 	 add(Pointer) --> PointerToPointer
	//Syntax <datatype> **<ptr to ptr name>;
	//The datatype of the pointer to pointer is also controlled by the datatype of the pointer being stored.
	int **pptr = &ptr; //Stores the memory location of the pointer ptr.
	
	printf("The value of age through its pointer to pointer is: %d\n",**pptr);
	
	
	//Call by Value and Call by Reference
	//By default, in C, the values passed to a function are passed by VALUE. Hence, a deep copy of the passed variable is created in a separate memory location and is operated on within the new function. The orignal value is not altered.
	int number = 4;
	square(number);
	printf("The value of number after the function call is: %d\n", number);
	
	//However, this behaviour can be overridden by altering the way the value is passed to the function. This is called Call by Reference. In this case, the value of the variable is passed to the function by passing its memory address (pointer) to the function. This allows the function to alter the values of the actual orignal variable.
	printf("The value of the number before reference call is: %d\n", number);
	square_by_reference(&number);
	printf("The value of the number after reference call is: %d\n", number);
	
}


void square(int n){
	n = n * n;
	printf("The value of local number n is: %d\n", n);
}

void square_by_reference(int *n){
	*n *= *n;
	printf("The value of the variable n is: %d\n", *n);
}
