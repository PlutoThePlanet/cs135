# ProgrammingAssignment5

## Project Goals
The goal of this project is to:
1.	Familiarize students with the use of **pointers**
2.  Familiarize students with **passing** variables **by address**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```frac_calc.c```

## Program
We’re in the second third of the class, so let’s write a calculator program for fractions. Our program should allow users to add, subtract, multiply, and divide fractions.  

The program should display a menu and prompt the user for a mathematical operation. The menu should give the user the option to add, subtract, multiply or divide fractions. After the user chooses their option, they should be prompted to input two fractions. The result of the arithmetic should then be displayed to the screen. **The resulting fraction does not need to be simplified.**  

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x fractionExecutable``` into the terminal and try running the executable again.

## Requirements
*main()*  
**Functionality**: The main function should prompt the user for a menu option. If the user chooses a valid arithmetic operation, the program should get two fractions from the user. It should decide, based on the menu option which actions to perform on the fractions. Option 1 adds the two fractions together. Option 2 subtracts the first fraction from the second. Option 3 multiplies the two fractions together. Option 4 divides the first fraction by the second one. Option 5 ends the program.  

In addition to the main functions, your program should have 6 more functions:

*getMenuChoice()*  
**Input Parameters**: none  
**Returned Output**: int  
**Functionality**: This function should display to the screen the options available to the user, get the user choice, and return the users inputted menu choice to the calling function.  

*getFraction()*  
**Input Parameters**: int pointer, int pointer  
**Returned Output**: none  
**Functionality**: This function should prompt the user to enter **one** fraction, using the forward slash between the two values. The numerator should be stored into the variable that one of the pointer parameters points to, and the denominator should be stored into the variable that the other pointer parameter points to.  

*addFraction()*  
**Input Parameters**: int, int, int, int, int pointer, int pointer  
**Returned Output**: none  
**Functionality**: This function adds two fractions, each represented by a pair of integer input parameters. The resulting fraction should be stored in the variables that the last pair of pointer parameters points to.  

*subtractFraction()*  
**Input Parameters**: int, int, int, int, int pointer, int pointer  
**Returned Output**: none  
**Functionality**: This function subtracts the first fraction from the second fraction, each of which are represented by a pair of integer input parameters. The resulting fraction should be stored in the variables that the last pair of pointer parameters points to.  

*multiplyFraction()*  
**Input Parameters**: int, int, int, int, int pointer, int pointer  
**Returned Output**: none  
**Functionality**: This function multiplies two fractions, each represented by a pair of integer input parameters. The resulting fraction should be stored in the variables that the last pair of pointer parameters points to.  

*dividesFraction()*  
**Input Parameters**: int, int, int, int, int pointer, int pointer  
**Returned Output**: none  
**Functionality**: This function divides the first fraction by the second fraction, each of which are represented by a pair of integer input parameters. The resulting fraction should be stored in the variables that the last pair of pointer parameters points to.    

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
