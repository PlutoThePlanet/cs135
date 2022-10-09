// Program: palindrome.c
// Purpose: strings, passing strings to functions
// Date: 11/17/20

#include <stdio.h>
#define ARRAY_SIZE 25

_Bool isPalindrome(char []);
_Bool isSameString(char [], char []);
void reverseCopy(char [], char []);
int stringLength(char []);

int main(){
	char word1[ARRAY_SIZE], word2[ARRAY_SIZE];
	_Bool word1Pal, word2Pal;
	
	//user input	
	printf("Enter your first word: ");
	scanf("%s", word1); 
	printf("Enter your second word: ");
	scanf("%s", word2); 
	
	//evaluation
	word1Pal = isPalindrome(word1);
	word2Pal = isPalindrome(word2);
	
	//printing output
	if(isSameString(word1, word2)){
		printf("You entered the same words!\n");
		if(word1Pal){
			printf("'%s' is a palindrome!\n", word1);
		}else{
			printf("'%s' is not palindrome.\n", word1);
		}
	}else{
		if(word1Pal){
			printf("'%s' is a palindrome!\n", word1);
		}else{
			printf("'%s' is not palindrome.\n", word1);
		}
		
		if(word2Pal){
			printf("'%s' is a palindrome!\n", word2);
		}else{
			printf("'%s' is not palindrome.\n", word2);
		}
	}
	
	// TESTING
	//char word1Reverse[25];
	//reverseCopy(word1, word1Reverse);
	//printf("%s\n", word1Reverse);

	//int length1 = stringLength(word1);
	//printf("%d\n", length1);
	
	return 0;
}

_Bool isPalindrome(char array[]){
	char reversedArray[ARRAY_SIZE]; 
	
	reverseCopy(array, reversedArray); //pass by address
	
	_Bool palindrome = isSameString(array, reversedArray);
	return palindrome;
}

_Bool isSameString(char word1[], char word2[]){
	int i;
	
	for(i=0; word1[i] != '\0'; i++){
		if(word1[i] != word2[i]){
			return 0;
		}	
	}
	
	//testing --> printf("%d\n", i); //prints out 4 because breaks here and doesn't increment to 5

	if(word1[i] == word2[i]){
		return 1;
	}
	
	return 0; //if the 1st string is shorter but = to the 2nd string (i.e. pai\0 & paige\0)
}

void reverseCopy(char source[], char destination[]){
	int size = stringLength(source);
	int index = 0;
	
	for(int i=size-1; i>=0; i--){ //size -1 to account for starting from 0
		destination[index] = source[i];
		index++;
	}
	
	destination[index] = '\0'; // we are building the string, therefore WE need to add the null char
}

int stringLength(char array[]){
	int size = 0, i = 0;
	
	while(array[i] != '\0'){
		i++;
		size++;
	}
	
	return size; //returns # of letters, b/c doesn't include null char
}

