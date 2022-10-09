// Program: students.c
// Purpose: file IO
// Date: 10/24/20

#include <stdio.h>

#define S_FILE "students.txt"

int getMenuChoice();
void displayStudent(FILE*);
void saveStudent(FILE*);

int main(){
	int option;
	FILE* fs;
	printf("***STUDENT SYSTEM***\n");
	option = getMenuChoice();
	
	switch(option){
		case 1: 
			fs = fopen(S_FILE, "r");
			if(fs == NULL){
				printf("Can't open file\n");
			}else{
				displayStudent(fs);
				fclose(fs);
			}
			break;

		case 2: 
			fs = fopen(S_FILE, "w");
			if(fs == NULL){
				printf("Can't open file\n");
			}else{
				saveStudent(fs);
				fclose(fs);
			}
			break;

		case 0: return 0;
		
		default: printf("Please enter a valid option!\n");
		   	 break;
	}//end of switch
	
	return 0;
}//end of main

int getMenuChoice(){
	int option;
	printf("1. Display Student\n2. Save Students\n0. EXIT\nEnter your choice: ");
	scanf("%d", &option);
	return option;
}

void displayStudent(FILE *fileR){
	int sID;
	char standing;
	double GPA;
	
	fscanf(fileR, "%d %c %lf", &sID, &standing, &GPA);
	printf("Student Number: %d\n", sID);
	printf("Student Standing: %c\n", standing);
	printf("Student GPA: %.4lf\n", GPA);
}

void saveStudent(FILE *fileW){
	int sID;
	char standing;
	double GPA;
	
	printf("Enter a student number: ");
	scanf("%d", &sID);
	printf("Enter the student's standing: ");
	scanf(" %c", &standing); //SPACE BEFORE CHAR COVERSION SPEC
	printf("Enter a GPA: ");
	scanf("%lf", &GPA);
	
	fprintf(fileW, "%d %c %.4lf", sID, standing, GPA);
}



