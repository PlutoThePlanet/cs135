# ProgrammingAssignment9

## Project Goals
The goal of this project is to:
1.	Familiarize students with the use of **strings**
2.  Familiarize students with **passing strings to functions**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```palindrome.c```

## Program
Say what? Let's build a system that analyzes a couple of words.  

The user should be prompted for two words. The program should check to see if the two words are the same. Then the program should check to see if either word is a palindrome (a palindrome is a word that that reads the same backward as forward).

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x palindromeExecutable``` into the terminal and try running the executable again.

## Requirements
*main()*  
**Functionality**: The main function should prompt the user for two words. If the two words are the same, a message should be displayed to the screen. A message should be displayed for each unique word letting the user know whether or not it is a palindrome.  

In addition to the main functions, your program should have 4 more functions:  

*isPalindrome()*  
**Input Parameters**: character array  
**Returned Output**: boolean  
**Functionality**: This function should accept as a parameter character array storing a string. It should save a copy of reversed word in a new string (*reverseCopy* function). It should check to see if the original string is the same as the reversed string (*isSameString* function), and return either true or false.  

*isSameString()*  
**Input Parameters**: character array, character array  
**Returned Output**: boolean  
**Functionality**: This function should accept as parameters two character arrays storing strings. It should iterate over one string and compare each character to the second string to determine if the strings are the same, and return either true or false.  

*reverseCopy()*  
**Input Parameters**: character array, character array  
**Returned Output**: none  
**Functionality**: This function should accept as parameters two character arrays storing strings. It should iterate over the source string and copy each character into the destination string. It would be easiest to use the *stringLength* to calculate the index of the last character of the source string to start copying in reverse.  

*stringLength()*  
**Input Parameters**: character array  
**Returned Output**: integer  
**Functionality**: This function should accept as a parameter character array storing a string. It should iterate over the array to determine how many characters are stored in the string, and return that value.  

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
