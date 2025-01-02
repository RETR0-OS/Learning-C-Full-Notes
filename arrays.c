#include <stdlib.h>
#include <stdio.h>

void main(){
	//arrays are continuous memory stores that consist of continuous memory locations which store data, making it easy to access and retrieve it.
	//arrays can only store homogenous data, ie, ints, floats, chars, or booleans. 
	
	//Syntax:
	//1) <datatype> <var>[<size>];
	//2) <datatype> <var>[] = {val1, val2, val3, ....,valn};
	//3) <datatype> <var>[n] = {val1, val2, val3, ....,valn};
	
	//Taking input in arrays (examples)
	//scanf("%d", &marks[0]);
	//scanf("%c", &sections[2]);
	
	//Printing array elements (examples)
	//printf("%d", marks[0]);
	//printf("%c", sections[2]);
	
	int marks[3];
	
	printf("Enter physics marks: ");
	scanf("%d", &marks[0]);
	printf("Enter chemistry marks: ");
	scanf("%d", &marks[1]);
	printf("Enter math marks: ");
	scanf("%d", &marks[2]);
	
	printf("Phys: %d\nChem: %d\nMath: %d\n", marks[0], marks[1], marks[2]);
	
	
	//Pointer arithmetic
	//Arithmetic operations can also be performed on pointer variables; however, not all operations can be performed on them.
	//Pointer variables support subtraction, comparision,  ++ and -- operators but they operate very differently as compared to the standard increment and decrement operators.
	
	//The subtraction of two pointers gives the differentce between their locations in the memory divided by the size of the datatype. 
	//Example: ptr1 = 1004, ptr2 = 1000 and both are of type "int", then, ptr1-ptr2 = (1004-1000)/4 = 1 (because int is of size 4 bytes).
	//This is useful in finding the differentce between two pointers in an array (such as is used in questions of two pointers or sliding window).
	//Note: The subtracted pointers must be of the same datatype.
	
	
	//Comparing two pointers can provide context to the relative positions of the two pointers (like in binary search).
	//Note: The compared pointers must be of the same datatype.
	
	
	//The ++ operator: Increases the value of the memory address stored by the pointer by the bytes of the data type. 
	//Eg: let there be a pointer of ptr of type "int". We know that int variables store 4 bytes of data. Let ptr's value by initially 2000. Then, ptr++ would result in 2000 + 4 (because int is of 4 bytes). Hence, ptr would now contain the memory location 2004.
	
	
	//The -- operator: Decreases the values of memory address stored by the pointer by the bytes of the data type.
	//Eg: 2000 - 4 = 1996.
	
	
	//Pointer Arithmetic is used for array traversals and relative memory access.
	int marks_[4] = {92, 76, 89, 99};
	int *ptr = &marks_[0];
	int i = 0;
	while (i<4){
		printf("marks: %d\n", *ptr);
		ptr++; //Increment address of ptr by 1 integer unit.
		i++;
	}
	
	
	//Multidimensional Arrays
	//Multidimensional arrays in C are handled the exxact same as those in Java.
	
	//Arrays in funciton calls
	//Arrays are always passed to functions in the form of reference calls. Hence, any changes made to an array within a function is reflected globally accross the program. Hence, modificiations to arrasy in functions should be made very very carefully.
	
	
	
	
}
