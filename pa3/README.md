# ProgrammingAssignment3

## Project Goals
The goal of this project is to:
1.	Familiarize students with **functions**
2.  Provide students with continued practice with **expressions and selection**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```area.c```

## Program
Imperial vs Metric!  

We're going to build a program which gets measurements from the user in feet and inches and converts them to meters so we can calculate the area in square meters.   

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x areaExecutable``` into the terminal and try running the executable again.

## Requirements
*main()*  
**Functionality**: The main function should prompt the user for a side measurement in feet and inches. It should then prompt the user for another side measurement in feet and inches. It should then call the appropriate function to convert those side measurements to meters. It should determine which side is the length and width so it can display the appropriate measurement with the appropriate label. Finally, the main function should call the appropriate function to calculate the area and display that area to the screen.

In addition to the main functions, your program should have 2 more functions:

*convertFtToMeter()*  
**Input Parameters**: integer feet value, integer inch value  
**Returned Output**: double meter value  
**Functionality**: This function should convert the feet and inch values to meters. To do this, you can calculate the total number of issues. You can then divide the inches by 39.37 to determine the number of meters. This function should return the converted feet/inches to meters value to the calling function.  

*calcAreaMeters()*  
**Input Parameters**: double side in meters, double side in meters  
**Returned Output**: double square meters value  
**Functionality**: This function should multiply the side parameter values together to calculate the area and return that area value to the calling function.   

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
