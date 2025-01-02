#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//structures in C are similar to "classes" or "objects" in OOP languages; however, structures can not contain methods or initialiazers. 
//Structures are essentially a way to group multiple datatypes into one.
//Syntax:

/*
struct <structure name>{
	<data type 1> <property 1>;
	<data type 2> <property 2>;
	<data type 3> <property 3>;
	<data type 4> <property 4>;
	......
	<data type n> <property n>;
};
*/

//Structure properties can be accessed using the "." operator.


struct student{
	char name[20];
	int age;
	int roll_no;
};

//typedef keyword
//Sometimes, the names of structures can get extremely long in the interest of being clear and explicit. While these names are great for readability, it gets hard to type them again and again.
//typedef allows to set an ALIAS for a structure name.
//Syntax: typedef struct <long structure name> { <properties> } <short alias>;
//Example: typedef struct CollegeEngineeringClass { char course_name[10]; } engClass;

//The usage of structures declared using typedef is different as well.
//Example: engClass course1;
//Old: struct CollegeEngineeringClass course1;

void print_student(struct student s);

void main(){
	struct student s1;
	strcpy(s1.name, "student 1"); //Array-defined strings are immutable;
	s1.age = 13;
	s1.roll_no = 1;
	
	
	struct student s2;
	strcpy(s2.name, "student 2"); //Array-defined strings are immutable;
	s2.age = 16;
	s2.roll_no = 2;
	
	
	struct student s3;
	strcpy(s3.name, "student 3"); //Array-defined strings are immutable;
	s3.age = 12;
	s3.roll_no = 3;
	
	struct student s4 = {"student 4", 19, 4};
	
	
	print_student(s1);
	print_student(s2);
	print_student(s3);
	print_student(s4);
	
	
	//Structures can also be put into arrays, just like other regular datatypes.
	//Syntax: struct <structure name> var[<size>];
	struct student class_register[10]; //Decalres an array of students called "class_register".
	class_register[0] = s1;
	class_register[1] = s2;
	class_register[2] = s3;
	class_register[3] = s4;
	
	
	
	
	//structures can also have pointers. This is an alternative way of defining arrays of structures.
	struct student *ptr_register; //declares a pointer of students called "ptr_register".
	ptr_register = &class_register[0]; //Initializes the pointer location to address of s1.
	for (int i=1; i<4;i++){
		ptr_register = &class_register[i];
		ptr_register++;	
	} 
	ptr_register = &class_register[0];
	++ptr_register;
	print_student(*ptr_register);
	printf("Name using pointer: %s\n", (*ptr_register).name); //properties of a struct pointer can also be accessed using the "*" operator.
	
	//Arrow operator.
	//Arrow operator simplifies the syntax of writing (*ptr).property. 
	// (*pointer).property		is the same as 		pointer -> property.
	printf("Name using the arrow operator: %s\n", ptr_register -> name);
	
	
}

void print_student(struct student s){
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
	printf("Roll number: %d\n", s.roll_no);
	printf("***********************************");
	printf("\n");
}

