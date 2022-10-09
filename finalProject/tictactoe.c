// Name: Paige Mortensen, Edward Martines-Anaya
// Program: tictactoe.c
// Purpose: Final Project
// Date: 12/4/20

#include <stdio.h>
#include <stdbool.h> //let's us use true/fales for _Bool vs 1/0

#define SIZE 10
#define COLUMNS 3
#define ROWS 3
#define Player_Data "Player_File.txt"

int getMenuChoice();
void showBoard(char Board [] [COLUMNS]);
void getMove(char Board [] [COLUMNS], int *row, int *col, char player);
void playGame(char Board[][COLUMNS], char player1 [], char player2 [], FILE* fp);
void getPlayers(char [], char [], FILE* Player_info);
void setResetBoard(char Board [] [COLUMNS]);
_Bool win(char Board[][COLUMNS], int row, int col);
_Bool tie(char Board[][COLUMNS]);
_Bool validMove(char Board[][COLUMNS], int row, int col);
int readScores (FILE* Player_info, int scores [], char names [] [20]);
void writeScore (FILE* Player_info, int scores [] /*char blank [20] [20]*/, int quantity, char names []);
void swap (int *A, int *B);
void stringCopy (char source [], char destination []);
void updateScore(FILE* Player_info, int scores, char names []);


int main(){
	int choice, base;
	char player1 [SIZE], player2 [SIZE];
	char Board [ROWS] [COLUMNS];
	FILE* fp;
	char names [20] [20];
	int score [20], quantity = 0, A;

	do{
		choice = getMenuChoice();

		switch (choice){
			case 1:
				fp = fopen (Player_Data, "a");
				if (fp == NULL)
				{
					printf ("File could not be found!\n");
				}
				else
				{
					getPlayers (player1, player2, fp);
					setResetBoard(Board);
					playGame(Board, player1, player2, fp);
					fclose (fp);
				}
					
				break;
			case 2:
				fp = fopen (Player_Data, "r");
				if (fp == NULL)
				{
					printf ("File could not be found!\n");
				}
				else
				{
					quantity = readScores (fp, score, names);

					updateScore (fp, *score, *names);

				for (A = 0; A < quantity; A++)
				{
					printf ("%s %d\n", names [A], score [A]);
				}
					fclose (fp);
				}
				break;
			case 0:
				return 0;
				break;
		}//end switch
	}while (choice != 0);

	return 0;
}

int getMenuChoice()
{
	int choice;

	printf ("1. Play game\n");
	printf ("2. Show scores\n");
	printf ("0. EXIT\n");
	printf ("Enter your choice: ");
	scanf ("%d", &choice);

	return (choice);
}

void getPlayers(char player1 [], char player2 [], FILE* Player_info)
{
	int size = 10;

	printf ("Player 1, enter your name: ");
	scanf ("%s", player1);
	printf ("Player 2, enter your name: ");
	scanf ("%s", player2);

	printf ("\n");

	printf ("%s, you'll be X's\n", player1);
	printf ("%s, you'll be O's\n\n", player2);
}

int readScores (FILE* Player_info, int scores [], char names [] [20])
{
	int count = 0;

	while (fscanf (Player_info, "%s %d", names [count], &scores [count]) == 2)
	{
		count++;
	}

	return count;
}

void writeScore (FILE* Player_info, int scores [], int quantity, char names [])
{
	int base;
	for (base = 0; base < quantity; base++)
	{
		fprintf (Player_info, "%c %d", names [base], scores [base]);
	}
}

void swap (int *A, int *B)
{

	int C = *A;
	*A = *B;
	*B = C;
}

void stringCopy (char source [], char destination [])
{
	int i;

	for (i = 0; source [i] != '\0'; i++);
	{
		destination [i] = source [i];
	}
	destination [i] = '\0';

}

void updateScore(FILE* Player_info, int scores, char names [])
{
	int quantity = 0;
	char blank [20] [20];
	char holder [20];
	int newScore [10];
	int A;

	quantity = readScores (Player_info, newScore, blank);	

	// Bubble sort

	for (A = 0; A < quantity - 1 && A < 10; A++)
	{
		if (A == quantity || A == 10-1)
		{
			newScore [A] = scores;

			stringCopy (blank [A], names);
		}// person in last

		else if (scores > newScore [A])
		{
			swap (&scores, &newScore [A]);
			stringCopy (holder , blank [A]);
			stringCopy (blank [A], names);
			stringCopy (names, holder);
		}
	}

	if (quantity < 9)
	{
		quantity++;
	}

	writeScore (Player_info, newScore, quantity, names);
}

//OPTION 1 ------------------------------------------------------------------------------------------
void playGame(char Board[][COLUMNS], char player1 [], char player2 [], FILE* fp){
	int option = 1;
	int row, col, i;
	char player = 'X';
	int scoreX = 0, scoreO = 0, numOfMoves;
	do{
		 row, col, i;
		 player = 'X';
		 numOfMoves = 0;

	
		do{
			printf("It's %c's turn!\n", player);
			showBoard(Board);
			getMove(Board, &row, &col, player);
		
			if(player == 'X'){
				player = 'O';
			}else{
				player = 'X';
			}//end if 
		
			numOfMoves++;
			
		}while(!win(Board, row, col) && !tie(Board));
		
		
			if(win(Board, row, col)){
				if(numOfMoves % 2 == 1){
					printf("%s has won!", player1);
					printf("play again?\n1: yes\n0: no\n");
					scanf("%d", &option);
					
					scoreX++;
				}else{
					printf("%s has won!", player2);
					printf("play again?\n1: yes\n0: no\n");
					scanf("%d", &option);

					scoreO++;
				}
			}else if(tie(Board)){
				printf("You have tied\n");
				printf("play again?\n1: yes\n0: no\n");
				scanf("%d", &option);
			}//end ifs
		setResetBoard(Board);
	}while(option != 0);

	if (scoreX > 0)
	{
		fprintf (fp, "%s %d\n", player1, scoreX);
	}

	if (scoreO > 0)
	{
		fprintf (fp, "%s %d\n", player2, scoreO);
	}
	//updateScore(fp, score, names);
}

//FUNCTIONS FOR PLAYING THE GAME -------------------------------------------------------------------------------------
void showBoard(char Board [] [COLUMNS])
{
	int base1, base2;

	printf ("    1   2   3\n");
	for (base1 = 0; base1 < 3; base1++)
	{
		printf ("  -------------\n");
		printf ("%d |", base1 + 1);
			for (base2 = 0; base2 < 3; base2++)
			{
				printf (" %c |", Board [base1] [base2]);
			}
		printf ("\n");
	}
		printf ("  -------------\n\n");
}

void getMove (char Board [] [COLUMNS], int *row, int *col, char player)
{
	int r = *row;	
	int c = *col;

	do{
		printf ("Pick a spot (row col)\n");
		scanf("%d %d", row, col);
		(*row)--;
		(*col)--;
	}while (!validMove(Board, *row, *col));

	Board [*row] [*col] = player;
	showBoard(Board);
}

_Bool validMove(char Board[][COLUMNS], int row, int col){

	if(Board[row][col] != ' '){
		return false;
	}	
	if(row < 0 || row >= 3){
		return false;
	}
	if(col < 0 || col >= 3){
		return false;
	}
	
	return true;
}	

_Bool win(char Board[][COLUMNS], int row, int col){ //check if the game is over by win
	char userMove = Board[row][col];
	int r = row, c = col;
	int counter = 0;
	
	//HORIZONTAL MOVES
	while((Board[r][c] == userMove) && (c >= 0)){ // right to left hand move
		counter++;
		c--;
	}

	c = col+1;//resave to original val
	r = row;

	while((Board[r][c] == userMove) && (c <= 2)){ // left to right hand move
		counter++;
		c++;
	}
	
	if(counter >= 3){
		return true;
	}
	
	//reset vals
	c = col; 
	r = row;
	counter = 0;
	

	//VERTICAL MOVES ----------------------------------------------------------------------------------------------
	while((Board[r][c] == userMove) && (r <= 2)){ // bottom to top move
		counter++;
		r++;
	}	

	r = row-1;//resave to original val
	c = col;

	while((Board[r][c] == userMove) && (r >= 0)){ // top to bottom move
		counter++;
		r--;
	}
	
	
	if(counter >= 3){
		return true;
	}
	
	//reset vals
	r = row; 
	c = col;
	counter = 0;
	
	//DIAGONAL MOVES -- top right to bottom left --------------------------------------------------------------------
	while((Board[r][c] == userMove) && (r <= 2) && (c >= 0)){
		counter++;
		c--;
		r++;
	}

	r = row-1; //resave to original vals
	c = col+1;

	while((Board[r][c] == userMove) && (r >= 0) && (c <= 2)){
		counter++;
		c++;
		r--;
	}

	if(counter >= 3){
		return true;
	}

	//reset vals
	r = row; 
	c = col;
	counter = 0;


	//DIAGONAL MOVES -- top left to bottom right --------------------------------------------------------------------
	while((Board[r][c] == userMove) && (r >= 0) && (c >= 0)){
		counter++;
		c--;
		r--;
		
	}
	
	r = row+1; //resave to original vals
	c = col+1;

	while((Board[r][c] == userMove) && (r <= 2) && (c <= 2)){
		counter++;
		c++;
		r++;
		
	}

	
	if(counter >= 3){
		return true;
	}
	
	return false;
}

_Bool tie(char Board[][COLUMNS]){ //this will check if the game is over by tie (if array has elements in every location)
	
	for(int i=0; i < ROWS; i++){
		for(int j=0; j < COLUMNS; j++){
			if((Board[i][j] != 'X') || (Board[i][j] != 'O')){ //if a space is available
				return false;
			}
		}
	}
	
	return true; //if the game is tied
}

void setResetBoard(char Board [] [COLUMNS])
{
	int rows = 3, row, columns = 3, column;

	for (row = 0; row < rows; row++)
	{
		for (column = 0; column < columns; column++)
		{
			Board [row] [column] = ' ';
		}
	}
}














