// Program: students.c
// Purpose: loops, file IO, passing by address
// Date: 10/31/20

#include <stdio.h>

#define S_FILE "students.txt"

int getMenuChoice();
void calcStats(FILE*, double*, double*, double*);
void saveStudents(FILE*);

int main(){
	int option;
	double GPAav, GPAmax=0, GPAmin=10;
	FILE* fp;

	do{
		option = getMenuChoice();
		switch (option){
			case 1: 
				fp = fopen(S_FILE, "r");
				if(fp == NULL){
					printf("Unable to open file");
				}else{
					calcStats(fp, &GPAav, &GPAmax, &GPAmin);
					printf("Average GPA: %.2lf\nMinimum GPA: %.2lf\nMaximum GPA: %.2lf\n", GPAav, GPAmin, GPAmax);
					fclose(fp);
				}//end of if
				break;
			case 2: 
				fp = fopen(S_FILE, "a");
				if(fp == NULL){
					printf("Unable to open file");
				}else{
					saveStudents(fp);
					fclose(fp);
				}//end of if
				break;
			case 0: 
				break;
			default: printf("Please enter a valid option\n");
				break;
		}//end of switch
		
	}while(option != 0);

	return 0;
}//end of main


int getMenuChoice(){
	int op;
	printf("***STUDENT SYSTEM***\n1. Analyze Data\n2. Save Students\n0. EXIT\nEnter your choice: ");
	scanf("%d", &op);
	return op;
}

void calcStats(FILE *fp, double *gpaAv, double *gpaMax, double *gpaMin){
	double GPAcurrent, GPAtotal;
	int numberOfGPA, garbage;
	
	while(fscanf(fp, "%d, %lf", &garbage, &GPAcurrent) == 2){
		GPAtotal += GPAcurrent;
		numberOfGPA++;
		
		if(GPAcurrent < *gpaMin){
			*gpaMin = GPAcurrent;
		}
		
		if(GPAcurrent > *gpaMax){
			*gpaMax = GPAcurrent;
		}
	}//end of while
	
	*gpaAv = GPAtotal / numberOfGPA;
}

void saveStudents(FILE *fp){
	int students, number;
	double gpa; 

	printf("How many students are you adding? ");
	scanf("%d", &students);
	
	for(int i=1; i<=students; i++){
		printf("Enter a student number: ");
		scanf("%d", &number);
		printf("Enter a GPA: ");
		scanf("%lf", &gpa);
		
		fprintf(fp, "%d, %.6lf\n", number, gpa);
	}
}





