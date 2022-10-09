// Program: frac_calc.c
// Purpose: pointers, functions, pass by address
// Date: 10/16/20

#include <stdio.h>

int  getMenuChoice();
void getFraction(int *num, int *den);
void addFraction(int num1a, int den1a, int num2a, int den2a, int *finalNumA, int *finalDenA);
void subtractFraction(int num1s, int den1s, int num2s, int den2s, int *finalNumS, int *finalDenS);
void multiplyFraction(int num1m, int den1m, int num2m, int den2m, int *finalNumM, int *finalDenM);
void divideFraction(int num1d, int den1d, int num2d, int den2d, int *finalNumD, int *finalDenD);

int main(){
	int option, num1, den1, num2, den2;
	int finalNum, finalDen;
	
	printf("***FRACTION CALCULATOR***\n");
	option = getMenuChoice();
	
	if((option >= 1) & (option <=4)){
		getFraction(&num1, &den1);
		getFraction(&num2, &den2);
	}
	
	switch(option){
		case 1: addFraction(num1, den1, num2, den2, &finalNum, &finalDen);
			break;
		case 2: subtractFraction(num1, den1, num2, den2, &finalNum, &finalDen);
			break;
		case 3: multiplyFraction(num1, den1, num2, den2, &finalNum, &finalDen);
			break;
		case 4: divideFraction(num1, den1, num2, den2, &finalNum, &finalDen);
			break;
		default: return 0; //ends code if anything other than 1-4 is typed
			break;
	}
	
	printf("*RESULT*\n");
	printf("%d/%d\n", finalNum, finalDen);
	
	return 0;
}//end of main function


int getMenuChoice(){
	int option;
	printf("1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n");
	scanf("%d", &option);
	return option;
}

void getFraction(int *num, int *den){
	printf("Enter a fraction #/#\n");
	scanf("%d/%d", num, den);
}

void addFraction(int num1a, int den1a, int num2a, int den2a, int *finalNumA, int *finalDenA){
	if(den1a == den2a){
		*finalNumA = num1a + num2a;
		*finalDenA = den1a;
	}else{
		*finalNumA = (num1a*den2a) + (num2a*den1a);
		*finalDenA = den1a * den2a;
	}
}

void subtractFraction(int num1s, int den1s, int num2s, int den2s, int *finalNumS, int *finalDenS){
	if(den1s == den2s){
		*finalNumS = num1s - num2s;
		*finalDenS = den1s;
	}else{
		*finalNumS = (num1s*den2s) - (num2s*den1s);
		*finalDenS = den1s * den2s;
	}
}

void multiplyFraction(int num1m, int den1m, int num2m, int den2m, int *finalNumM, int *finalDenM){
	*finalNumM = num1m * num2m;
	*finalDenM = den1m * den2m;
}

void divideFraction(int num1d, int den1d, int num2d, int den2d, int *finalNumD, int *finalDenD){
	*finalNumD = num1d * den2d;
	*finalDenD = den1d * num2d;
}
