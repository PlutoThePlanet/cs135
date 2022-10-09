# ProgrammingAssignment2

## Project Goals
The goal of this project is to:
1.	Familiarize students with **arithmetics expressions**
2.  Familiarize students with the **selection**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```pizza.c```

## Program
Peter Piper picked a peck of perfect pizzas!  

We're going to build a calculator to help us choose the best combination of pizzas.   

We’ll be getting the user’s potential pizza orders. We'll start with how many pizzas the user is considering ordering. To be able to compute the area of the pizza, we’ll also need the user to enter the size of the pizza (which is the diameter in inches). Finally, to compare costs we'll need the price of an individual pizza. We'll need all that information again for the second pizza order.  

To be able to advise the user on which order they should choose, we're going to have to make some calculations. We'll need to calculate the area of one of the pizzas from each order and we'll need to calculate the cost per inch for each pizza order. Once we have those values, we can start making some comparisons.  

The best choice would be if a pizza order had the most total pizza area and the lowest cost per inch. Otherwise, the user will have to make their own choice: do they want more pizza or do they want a better deal?

### Input:
The user should be prompted for a set of three values, each on a separate line. 

Example (the highlighted part is what the program displays and the italicized part is the user input):  
```How many pizzas are you considering ordering? ``` *2*  
```What size are they, in inches? ```*12*  
```How much does each pizza cost? ```*6.99*  

### The program should behave as follows:
Your program will need to prompt the user and get the above information for two orders of pizza. It must then make the appropriate calculations to get from the diameter and number of pizzas entered to the total area of pizza included in each order. You will also need to be able to calculate the cost of the pizza per inch.  

Your program should compare total area of each pizza order and cost per inch of each pizza order to determine if there is a best choice. Otherwise, the user should be advised of which pizza has the most overall area and which pizza has the lowest cost per inch.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x pizzaExecutable``` into the terminal and try running the executable again.
### Hints:
- Make sure you try out different test cases!
- Plan out your calculations and comparisons, then implement them in code.
- Play close attention to using scanf with variables.
- Make sure you control the formatting of any floating-point output. 

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
