# ProgrammingAssignment7

## Project Goals
The goal of this project is to:
1.	Allow students to create a practice combining **loops**, **File IO**, and **passing by address**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```students.c```.
## Program
Write a program for managing students which loads student information from a file, calculates GPA statistics, and allows the user to add new students. The user should be shown a menu with three options: analyze data, add students, or exit the program. If the user does not choose a valid option, an error message should be displayed. These options should continue to be displayed until the user chooses to exit the program.

If the user chooses to exit, the program should end. 

If the user chooses to display the statistics, the contents of the students.txt file should be loaded and analyzed to determine the average, max, and min of the GPAs. If the file is not available, an error message should be displayed to the user.

If the user chooses to add students, they should be prompted for the number of students they’d like to add. They should then be prompted that many times for the student number and student GPA. Each of the new items should be added to the students.txt file. If the file is not available, an error message should be displayed to the user.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x studentExecutable``` into the terminal and try running the executable again.

### File Format
An input file with the correct format is included in this repository.  

## Requirements
*main()*  
**Functionality**: This main function should prompt the user for a menu option until they enter 0. It should decide, based on that menu option which actions to perform. Option 0 ends the program. Option 1 opens the students.txt file for reading and checks for a successful connection to the file stream. If it can, it will calculate the statistics, display them, then close the file. Option 2 opens the students.txt for writing and checks for a successful connection to the file stream. If it can, it gets new students, then closes the file. Any other options should result in an error message.   

In addition to the main functions, your program should have 3 more functions:  

*getMenuChoice()*  
**Input Parameters**: none  
**Returned Output**: int  
**Functionality**: This function should display to the screen the options available to the user, get the user choice, and return the users inputted menu choice to the calling function. 

*calcStats()*  
**Input Parameters**: FILE pointer, pointer for average GPA, pointer for maximum GPA, pointer for minimum GPA  
**Returned Output**: none  
**Functionality**: This function should accept a file pointer which has already been connected to a file stream. It should calculate the average of all the GPAs. It should also find the maximum and minimum GPAs. These values should be saved in whatever variables the pointer parameters point to.  

*saveStudents()*  
**Input Parameters**: FILE pointer  
**Returned Output**: none  
**Functionality**: This function should accept a file pointer which has already been connected to a file stream. It should prompt the user for the number of students they’d like to add. For each of those students, the user should be prompted for the student number, number of credits, and student GPA, which should all be saved to the file.  

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
