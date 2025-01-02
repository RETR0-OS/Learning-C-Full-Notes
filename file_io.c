#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

void main(){
	//FILE is a hidden structure that needs to be created to work with files in C.
	//A File POINTER is a pointer that points to this hidden structure. This is what allows us to interact with the file.
	
	//Syntax: FILE *<pointer name>;
	FILE *fileptr;
	
	
	//Opening a file
	//fopen() function is used to open a file on the hard disk. It supports the following modes:
	/*
		1) r -> Read file. Returns NULL if file does not exist.
		2) rb -> Read in binary mode. Returns NULL if file does not exist.
		3) wb -> Write in binary mode
		4) w -> Write file
		5) a -> Append mode
	*/
	//Syntax: <file pointer> = fopen("<filename>", <mode>);
	fileptr = fopen("test.txt", "r");
	
	//Reading from a file
	//Data can be read from a file using the fscanf() function. It treats the file as an input stream and allows reading of all datatype of characters, using the correct format specifier.
	char ch;
	int num;
	char name[5];
	float cgpa;
	
	fscanf(fileptr, "%c", &ch);
	fscanf(fileptr, "%d ", &num);
	fscanf(fileptr, "%c", &name[0]);
	fscanf(fileptr, "%c", &name[1]);
	fscanf(fileptr, "%c", &name[2]);
	fscanf(fileptr, "%c", &name[3]);
	name[4] = '\0';
	fscanf(fileptr, "%f \n", &cgpa);
	
	printf("Section: %c\n", ch);
	printf("Roll number: %d\n", num);
	printf("Name: %s\n", name);
	printf("CGPA: %.2f\n", cgpa);
	
	//Closing a file
	//fclose() closes the file opened earlier.
	fclose(fileptr);
	
	
	FILE *writeptr;
	//Writing to a file
	writeptr = fopen("test_copy.txt", "w");
	
	//writing data to a file can be done using the fprintf() function.
	fprintf(writeptr, "%c ", ch);
	fprintf(writeptr, "%d ", num);
	fprintf(writeptr, "%c", name[0]);
	fprintf(writeptr, "%c", name[1]);
	fprintf(writeptr, "%c", name[2]);
	fprintf(writeptr, "%c ", name[3]);
	fprintf(writeptr, "%.1f\n", cgpa);
	
	
	fclose(writeptr);
	printf("Data copied to new file.\n");
	
	
	//Appending to a file.
	FILE *appendptr;
	appendptr = fopen("test_copy.txt", "a");
	
	//appending data is the exact same as writing it. It is just that the old data is not deleted.
	fprintf(appendptr, "%c ", 'B');
	fprintf(appendptr, "%d ", 124);
	fprintf(appendptr, "%s ", "Ross");
	fprintf(appendptr, "%.1f\n", 8.9);
	
	fclose(appendptr);
	printf("Data backup updated.\n");
	
	
	//End Of File (EOF) Character.
	//The end of file character is returned only when data is read using the fgetc() method. fgetc() reads characters from a file.
	//Syntax: fgetc(fileptr);  -> returns the character read from the file and moves pointer forard by 1 byte.
	
	
	
	
}
