// Program: wind.c
// Purpose: arrays, passing arrays to functions
// Date: 11/10/20

#include <stdio.h>

#define W_FILE "wind.txt"

int getMenuChoice();
int loadWindData(FILE*, double [], char []);
void displayWindData(int, double [], char []);
void calcWindStats(int, double [], char [], double*, char*);
int addWindData(FILE*, int, double [], char []);

int main(){
	int option, size;
	double windSpeeds[50], avgWindSpeed=0;
	char windDirections[50], modeWindDirection;
	FILE* fp;
	
	do{	
		option = getMenuChoice();
		
		switch(option){
			case 1: 
				fp = fopen(W_FILE, "r");
				if(fp == NULL){
					printf("Unable to open file\n");
				}else{
					size = loadWindData(fp, windSpeeds, windDirections);
					fclose(fp);
				}
				break;
			case 2: 
				displayWindData(size, windSpeeds, windDirections);
				break;
			case 3: 
				calcWindStats(size, windSpeeds, windDirections, &avgWindSpeed, &modeWindDirection);
				printf("Wind averages %.2lf mph, mostly in the %c direction\n\n", avgWindSpeed, modeWindDirection);
				break;
			case 4: 
				fp = fopen(W_FILE, "a");
				if(fp == NULL){
					printf("Unable to open file\n");
				}else{
					size = addWindData(fp, size, windSpeeds, windDirections);
					fclose(fp);
				}
				break;
			case 0: 
				return 0;
				break;
			default: 
				printf("Please enter a valid option\n");
				break;
		}//end of switch
	}while(option != 0);

	return 0;
}

int getMenuChoice(){
	int op;
	printf("**WIND DATA**\n1. Load Wind Data\n2. Display Wind Data\n3. Analyze Wind Data\n4. Add Wind Data\n0. EXIT\n");
	printf("Enter your choice: ");
	scanf("%d", &op);
	return op;
}

int loadWindData(FILE* fp, double windSpeeds[], char windDirections[]){
	double speed;
	char direction;
	int size=0;
	
	while(fscanf(fp, "%lf %c", &speed, &direction) == 2){
		size++;
		windSpeeds[size] = speed;
		windDirections[size] = direction;
		//printf("%lf %c\n", speed, direction);
	}
	
	//printf("%d\n\n", size);
	return size;
}

void displayWindData(int size, double windSpeeds[], char windDirections[]){
	printf(" WIND DATA\n");
	printf("=================================================\n");
	printf("||Item #      |    Wind Speed    |  Direction  ||\n");
	printf("||=============================================||\n");
	printf("||------------|------------------|-------------||\n");
	
	for(int i=1; i<=size; i++){
		printf("||%12d|%18.2lf|%13c||\n", i, windSpeeds[i], windDirections[i]);
		printf("||------------|------------------|-------------||\n");
	}
	
	printf("=================================================\n\n");
}

void calcWindStats(int size, double windSpeeds[], char windDirections[], double* avgWindSpeed, char* modeWindDirection){
	int N=0, S=0, E=0, W=0;
	double totalSpeed=0;
	int count=0;
	
	*avgWindSpeed=0;
	
	for(int i=0; i<size+1; i++){
		totalSpeed += windSpeeds[i];
		count++;
	
		if(windDirections[i] == 'N'){
			N++;
		}else if(windDirections[i] == 'S'){
			S++;
		}else if(windDirections[i] == 'E'){
			E++;
		}else if(windDirections[i] == 'W'){
			W++;
		}
	}//end of for loop

	*avgWindSpeed = totalSpeed / size; // PRINTS OUT INCORRECT VALUE--------------------------------------------

	if((N > S) && (N > E) && (N > W)){ // DEFAULTS TO DIRECTION WEST--------------------------------------------
		*modeWindDirection = 'N';
	}else if((S > N) && (S > E) && (S > W)){
		*modeWindDirection = 'S';
	}else if((E > N) && (E > S) && (E > W)){
		*modeWindDirection = 'E';
	}else{
		*modeWindDirection = 'W';
	}//end of if

	//printf("%lf", totalSpeed);
	//printf("%d\n", size);
	//printf("%d\n", count);
}

int addWindData(FILE* fp, int size, double windSpeeds[], char windDirections[]){ // FINISH FUNCTION------------------
	int data;

	printf("How many data items would you like to add? ");
	scanf("%d", &data);
	
	for(int i=0; i<data; i++){
		printf("Wind speed? ");
		scanf("%lf", &windSpeeds[i]);
		printf("Wind direction? ");
		scanf(" %c", &windDirections[i]);
	
		fprintf(fp, "%lf %c\n", windSpeeds[i], windDirections[i]);
	}
	
	return data + size;
}









