// Program: shoes.c
// Purpose: pointers
// Date: 10/10/20

#include <stdio.h>

#define SALES_TAX 0.0826

int main(){
	
	double budget, price, totalPrice, change;
	double *ptrBudget, *ptrPrice, *ptrTotalPrice, *ptrChange;
	
	ptrBudget = &budget;
	ptrPrice = &price;
	ptrTotalPrice = &totalPrice;
	ptrChange = &change;
	
	printf("What is your budget? ");
	scanf("%lf", ptrBudget);
	printf("What is the price of the shoes you want? ");
	scanf("%lf", ptrPrice);
	
	*ptrTotalPrice = (*ptrPrice * SALES_TAX) + *ptrPrice;
	
	if (*ptrTotalPrice <= *ptrBudget){
		*ptrChange = *ptrBudget - *ptrTotalPrice;
		printf("Congratulations! You can buy these shoes with $%.2lf to spare!\n", *ptrChange);
	}else{
		printf("Sorry! $%.2lf for these shoes is out of your budget.\n", *ptrTotalPrice);
	}
	
	return 0;
}
