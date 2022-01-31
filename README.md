# ProgrammingAssignment1

## Project Goals
The goal of this project is to:
1.	Familiarize students with **variables**
2.  Familiarize students with the **printf** and **scanf** functions.
3.  Familiarize students with **arithmetic expressions**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and comments recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```colors.c```

## Program
I can see your true colors: ROYGBIV!  

We’re going to build a program to survey favorite colors.

**The program should behave as follows:**  
We’ll be getting the favorite color in the form of an initial (ROYGBIV are each letters that stand for colors of the rainbow). We’ll also be getting the number of people who say that is their favorite color. We’ll do that for three different colors.  

The program should then display the color data back to the user, including the percentage of people who liked that color (out of the total number of people). It should display each of the items in a table that the program creates. Please run the provided executable for an example of the table’s format. Use the formatting techniques you learned for conversion specifiers and formatted IO. **Your program’s table should be exactly the same as the table in the provided program.**

### Input:
The user should be prompted for a set of two values which represent the color and the number of people. The user should enter both values on one line, separated by a space. The user should then be prompted for the remaining two color data.  

Example (the highlighted part is what the program displays and the italicized part is the user input):  
```First favorite color and number of people: ``` *R 14*

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x colorExecutable``` into the terminal and try running the executable again.
### Hints:
- The vertical line is called a pipe. It's on your keyboard, if you use the Shift + \ key (above the Enter key).
- The double lines are equals (=) and the single lines are dashes (-).
- Make sure you try out different test cases!
- Play close attention to using scanf with character variables.
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
