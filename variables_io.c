#include <stdio.h>
#include <stdlib.h>

void main(){
	int a = 5;
	int b = 4;
	double c;
	char d;
	
	char name[20]; //this is how strings are defined in C. C considers strings to be a character array. Here, we initialize a character array of max length 20, named "name".
	
	
	
	
	
	
	
	printf("Enter your decimal value: ");
	scanf("%lf", &c);  //In C, we cannot store a value by directly giving the variable name. Instead, we have to provide the memory address of the var. &<var> fetches the memory address of a variable. 
	
	
	
	
	
	printf("\nEnter a character:");
	fflush(stdin); //Used to flush the system input stream. This prevents overflow of the extra characters (like \n) into the variable d.
	scanf(" %c", &d); //We put " " in front of the format specifier to consume any leftover buffer characters. %c stores the actual value into d.	
	
	
	
	
	printf("\nEnter a name:");
	fflush(stdin);
	scanf(" %s", name); //stores a character array in name. The array is stored till the first " " or \n is encountered. 
	
	
	
	
	
	
	printf("\na = %d\nb = %d\nc = %.2lf\nd = %c\n", a, b, c, d);
	printf("My name is: %s\n", name);
	
}
