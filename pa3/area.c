// Program: area.c
// Purpose: functions
// Date: 9/25/20

#include <stdio.h>

int side1FT, side1IN, side2FT, side2IN;
double side1M, side2M, area;
double length, width;


double convertFtToMeters(int feet, int inches){
	int totalIn = (feet*12)+inches;
	return totalIn/39.37;
}


double calcAreaMeters(double length, double width){
	return length*width;
}


int main(){
	printf("Please enter your first side in feet inches, FT IN: ");
	scanf("%d %d", &side1FT, &side1IN);
	printf("Please enter your second side in feet inches, FT IN: ");
	scanf("%d %d", &side2FT, &side2IN);
	
	//convert
	side1M = convertFtToMeters(side1FT, side1IN);
	side2M = convertFtToMeters(side2FT, side2IN);

	//length vs width
	if(side1M > side2M){
		length = side1M;
		width = side2M;
		printf("\nLength in meters: %.3lf\n", length);
		printf("Width in meters: %.3lf\n", width);
	}else{
		length = side2M;
		width = side1M;
		printf("\nWidth in meters: %.3lf\n", width);
		printf("Length in meters: %.3lf\n", length);
	}

	//calculate, print
	area = calcAreaMeters(length, width);
	printf("Area in square meters: %.3lf\n", area);
}











