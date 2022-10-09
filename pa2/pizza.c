// Program: Pizza Project
// Purpose: arithmetic expressions, if statements
// Date: 9/18/20

#include <stdio.h>

int main(){
	
	int pizzaOrder1, pizzaOrder2;
	int pizzaSize1, pizzaSize2;
	double cost1, cost2;
	double area1, area2;
	double cpi1, cpi2;
	int pi = 3.1415;

	// first order
	printf("First Pizza Order\nHow many pizzas are you considering first? ");
	scanf("%d", &pizzaOrder1);
	printf("What size are they, in inches? ");	
	scanf("%d", &pizzaSize1);
	printf("How much does each pizza cost? ");
	scanf("%lf", &cost1);
	
	// second order
	printf("Second Pizza Order\nHow many pizzas are you considering second? ");
	scanf("%d", &pizzaOrder2);
	printf("What size are they, in inches? ");	
	scanf("%d", &pizzaSize2);
	printf("How much does each pizza cost? ");
	scanf("%lf", &cost2);
	
/* It must then make the appropriate calculations to get from the diameter and number of pizzas entered to the total area of pizza included in each order. 

You will also need to be able to calculate the cost of the pizza per inch.*/

	area1 = pi*(pizzaSize1/2)*(pizzaSize1/2) * pizzaOrder1; //total area of piza order 1
	area2 = pi*(pizzaSize2/2)*(pizzaSize2/2) * pizzaOrder2; //total area of piza order 2
	
	cpi1 = (cost1*pizzaOrder1)/area1; // cost per inch of order 1
	cpi2 = (cost2*pizzaOrder2)/area2; // cost per inch of order 2

/* Your program should compare total area of each pizza order and cost per inch of each pizza order to determine if there is a best choice.

Otherwise, the user should be advised of which pizza has the most overall area and which pizza has the lowest cost per inch.*/
	

	if((cpi1 < cpi2) && (area1 > area2)){
		printf("Your best choice is %d %d-inch pizzas.\n", pizzaOrder1, pizzaSize1);
	}else if((cpi2 < cpi1) && (area2 > area1)){
		printf("Your best choice is %d %d-inch pizzas.\n", pizzaOrder2, pizzaSize2);
	}else{
		if(area1 > area2){
			printf("If you just want more pizza, you should choose %d %d-inch pizzas.\n\n", pizzaOrder1, pizzaSize1);
		}else{
			printf("If you just want more pizza, you should choose %d %d-inch pizzas.\n\n", pizzaOrder2, pizzaSize2);
		}
		if(cpi1 < cpi2){
			printf("If you want more pizza for your dollar, you should choose %d %d-inch pizzas.\n\n", pizzaOrder1, pizzaSize1);
		}else{
			printf("If you want more pizza for your dollar, you should choose %d %d-inch pizzas.\n\n", pizzaOrder2, pizzaSize2);
		}
	}

	return 0;
}




















