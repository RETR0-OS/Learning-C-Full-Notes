#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Provides access to string functions
#include <ctype.h> // Provides access to character functions.

void main(){
	//strings in C are treated as character arrays.
	
	
	//Decalring strings in C
	
	char arr[] = {'a','b','c', '\0','\n'}; //defines a character array.
	
	char firstName[] = {"Aaditya"}; //initializes a string, ie, a character array.
	//Every string in C has a length of size + 1. This is so as every string in C ends with a '\0' (null-terminator) character. Hence, it is stored as {'A','a','d','i','t','y','a','\0'}
	
	char lastName[] = "Jindal"; //Alternative way to initilize a string. NOTE: strings initialized using the array notation are IMMUTABLE in nature. Mutable strings are defined using the POINTER notation.
	//NOTE: the value of strings defined by array notation can be changed using the strcpy() function instead of the "=" operator.
	
	char *lastName_new = "Jindal"; //pointer declaration.
	
	printf("First name is: %s\n", firstName); //%s format specifier is used to print strings. In case of strings, we do not need to provide an explicit memory address, just like in case of arrays.
	
	char str1[5]; //Initializes a string (character array) of size 5 (excluding '\0') with garbage data.
	
	char str2[5] = {}; //Initializes string of size 5 (excluding '\0') with all bytes as '\0', i.e, {'\0', '\0', '\0', '\0', '\0', '\0'};
	
	
	
	//String functions in C
	
	//strlen() function returns the "character" length of the string, ie, excluding all the '\0'. The return type of strlen() is NOT integer. It returns an unsigned LONG.
	printf("Size of first name: %d (character length)\n", strlen(firstName));
	//sizeof() function returns the "true" length of the string, ie, including all the '\0'. sizeof() can be used on any variable type as it returns the number of b ytes allocated to a variable in the memory. sizeof() can also be used with datatype to find out how much memory is allocated to different datatypes. 
	printf("Size of last name: %d (memory length)\n", sizeof(lastName)); 
	printf("Size of a double variable: %d\n", sizeof(double));
	printf("Size of an  integer variable: %d\n", sizeof(int));
	//strcmp stands for "string compare". It is similar to .compareTo in java. It returns 0 if strings are equal, +ve if str1 > str2, and -ve if str1 < str2.
	printf("banana is greater than apple: %d\n", strcmp("banana", "apple"));
	printf("apple is greater than banana: %d\n", strcmp("apple", "banana"));
	printf("banana is equal to banana: %d\n", strcmp("banana", "banana"));
	//strcpy() stands for "string copy." It creates a deep copy of a string and stores it in a new variable.
	char old_str[5] = "hello";
	char new_str[6];
	strcpy(new_str, old_str);
	printf("C says %s\n",new_str);
	//gets() function allows to input strings with spaces. By default, the scanf function does not allow string input with spaces. it ends at the first space, \t, or \n encountered.
	//while gets() is extremely useful, it is extremely dangerous and depracated as it allows for buffer overflow attacks. gets() does not check for the max characters that can be stored in the string, thus allowing overwriting of the buffer. 
	char name[10];
	printf("Enter your name: ");
	gets(name); // Take input into name with spaces
	//fgets() function solves the buffer overflow problem with gets() as it validates the input length of the input string against the maximum allowed length and terminates the string according to the max number of characters, or new line, whichever comes first.
	char safe_name[10];
	printf("Enter your name again: ");
	fgets(safe_name, 10, stdin); //Syntax: fgets(<var name>, <max size>, input stream (file, string or standard input).
	//puts() function prints out the strings without using printf function. It also appends a newline character at the end of the line.
	printf("Your name is: ");
	puts(name);
	
	printf("Your safe name is: ");
	puts(safe_name);
	
	
	
	//Character functions in C
	
	//isalpha() determines if a charater is an alphabet. 0 is False, num>0 if True.
	printf("Is h a letter: %d\n", isalpha('h'));
	printf("Is 0 a letter: %d\n", isalpha('0'));
	//isdigit() determines if a charater is a digit. 0 is False, num>0 if True.
	printf("Is h a letter: %d\n", isdigit('h'));
	printf("Is 0 a letter: %d\n", isdigit('0'));
	//isalnum() determines if a charater is an alphanumeric. 0 is False, num>0 if True.
	printf("Is h an alphanumeric: %d\n", isalpha('h'));
	printf("Is 0 an alphanumeric: %d\n", isalpha('0'));
	printf("Is ? an alphanumeric: %d\n", isalpha('?'));
	//islower(), isupper(). return 0 if false, num>0 if True.
	printf("h is lower: %d\n", islower('h'));
	printf("H is upper: %d\n", isupper('H'));
	//tolower(). return char in lower case of the arument char.
	printf("H in lowercase is: %c\n", tolower('H'));
	//isspace(). returns 0 if false, num>0 otherwise.
	printf("\' \' is a space: %d\n", isspace(' '));
	
	
	
	
}
