// Program: project1
// Purpose: variables, printf, scanf
// Date: 9/11/20

#include <stdio.h>

int main(){
	printf("Welcome to McKeith's!\nMay I take your order?\nCombo#s: 1 - 10 | Sizes: S M L\n\n");

	//variables
	char size1, size2, size3, size4;
	int combo1, combo2, combo3, combo4;
	double price1, price2, price3, price4;
	
	//user order
	printf("Order 1 (combo# size price): ");
	scanf("%d %c %lf", &combo1, &size1, &price1); //order 1
	printf("Order 2 (combo# size price): ");
	scanf("%d %c %lf", &combo2, &size2, &price2); //order 2
	printf("Order 3 (combo# size price): ");
	scanf("%d %c %lf", &combo3, &size3, &price3); //order 3
	printf("Order 4 (combo# size price): ");
	scanf("%d %c %lf", &combo4, &size4, &price4); //order 4
	
	//table summary
	printf("\n  YOUR ORDER:\n");
	printf("===================================================\n");
	printf("||Combo Size    |  Combo Number |     Combo Price||\n");
	printf("===================================================\n");
	printf("||      %c       |        %d      |      %.2lf      ||\n", size1, combo1, price1); //order 1
	printf("||--------------|---------------|----------------||\n");
	printf("||      %c       |        %d      |      %.2lf      ||\n", size2, combo2, price2); //order 2
	printf("||--------------|---------------|----------------||\n");
	printf("||      %c       |        %d      |      %.2lf      ||\n", size3, combo3, price3); //order 3
	printf("||--------------|---------------|----------------||\n");
	printf("||      %c       |        %d      |      %.2lf      ||\n", size4, combo4, price4); //order 4
	printf("===================================================\n");
	
	return 0;
}
