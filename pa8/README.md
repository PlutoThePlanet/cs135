# ProgrammingAssignment8

## Project Goals
The goal of this project is to:
1.	Familiarize students with the use of **arrays**
2.  Familiarize students with **passing arrays to functions**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```wind.c```

## Program
Got wind? Let's create a system to manage wind data.  

The user should be shown a menu with five options: load wind, display wind, analyze wind statistics, add wind, or exit the program. If the user chooses to exit, the program should end. Otherwise, if the user chooses to load students, the contents of the file should be loaded into the program. If the user chooses to display the students, they should be displayed to the user in a tabular format. If the user chooses to analyze the data, the statistics should be calculated and displayed to the screen. If the user chooses to add students, they should be prompted for the number of students they’d like to add. They should then be prompted that many times for the wind speed and direction. Each of the new items should be saved to the file.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x windExecutable``` into the terminal and try running the executable again.

## Requirements
*main()*  
**Functionality**: The main function should prompt the user for a menu option until they enter enter 0. It should decide, based on that menu option which actions to perform. Option 0 ends the program. Option 1 opens the ```wind.txt``` file for reading and checks for a successful connection to the file stream, loads the data within the program, then closes the file. Option 2 will display the wind data, one item per row. Option 3 calculates the wind statistis and displays them to the screen. Option 4 opens the ```wind.txt``` file for writing and checks for a successful connection to the file stream. If it can, it gets new wind data and save it to the file, then closes the file. The new wind data should also be available as the program contines to run. Any other options should result in an error message.  

In addition to the main functions, your program should have 5 more functions:  

*getMenuChoice()*  
**Input Parameters**: none  
**Returned Output**: int  
**Functionality**: This function should display to the screen the options available to the user and return the users inputted menu choice.  

*loadWindData()*  
**Input Parameters**: FILE pointer, double array of wind speeds, char array of wind directions  
**Returned Output**: integer number of data items  
**Functionality**: This function should accept a file pointer which has already been connected to a file stream. It should save each set of values into the appropriate arrays. It should return to the calling function the number of data items read in from the file.  

*displayWindData()*  
**Input Parameters**: integer number of data items, double array of wind speeds, char array of wind directions  
**Returned Output**: none  
**Functionality**: This function should accept an array of wind speeds, an array of wind directions, and the number of data items. It should display a table of wind data to the screen. For every data item loaded into the program (and therefore saved in the arrays), the item number, wind speed, and wind direction should be displayed.  

*calcWindStats()*  
**Input Parameters**: integer number of data items, double array of wind speeds, char array of wind directions, pointer for average wind speed, pointer for the most prevalent wind direction character  
**Returned Output**: none  
**Functionality**: This function should accept an array of wind speeds, an array of wind directions, and the number of data items. It should calculate the average of all the wind speeds. It should also find the wind direction listed most often by counting the number of times either N, S, E, or W are listed in the array. These values (the average wind speed and most prevalent wind direction) should be saved in whatever variables the pointer parameters point to.  

*addWindData()*  
**Input Parameters**: FILE pointer, integer number of data items, double array of wind speeds, char array of wind directions  
**Returned Output**: integer number of data items  
**Functionality**: This function should accept a file pointer which has already been connected to a file stream. It should prompt the user for the number of wind data items they’d like to add. For each of those items, the user should be prompted for the wind speed and wind direction, which should be added to the program's wind data arrays and saved to the end of the file. The new number of data items should be returned from the function.  

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
