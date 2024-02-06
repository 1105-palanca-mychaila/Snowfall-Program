# ProgrammingAssignment1

## Project Goals
The goal of this project is to:
1.	Familiarize students with **variables**.
2.	Familiarize students with **expressions**.
3.	Familiarize students with **formatted IO**.

### Important Notes
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting.
2.	**Autograder**: For your testing purposes, the autograder will be comparing your output to that of the example executable. It _**will not**_ be used for grading.
3.	**Filename**: Save your program as `snowfall.c`

## Program
Let it snow! Let's create a program to get a sample of snowfall data from this month.   

### The program should behave as follows
We'll get three data points from the user, which include an amount of snowfall in inches, a letter for the day of the week, and a number for the day of the month. For example  
`Enter the first day's data (inches, day, date): 1.1 M 4`  
`Enter the second day's data (inches, day, date): 2.2 W 6`  
`Enter the third day's data (inches, day, date): 3.3 F 8`  

The program should then display the data in the order and format demonstrated in the example program, along with the total and average snowfall amounts in inches.

## Requirements
- Only use the tools we have gone over in class so far.
  - Do not use strings or loops or ifs, etc.
- Each day's values should be entered on one line and separated by a space, in the order specified above.
  - You do not need to verify that the user entered correct values. Just assume they will abide by the format described.
- Your program's table should match the example program's format.
  - You must use field widths to help with the spacing in the table.

### Hints
- You have to write all of the code for displaying the table in your program.
  - The vertical line `|` is called a pipe and is above the backslash on the keyboard.
  - The thick borders are just multiple `=`.
  - The thin borders are just multiple `-`.
- You can use alternative letters for days with the same first letter. For example,
  - Tuesday can be `T` and Thursday can be `R`.
  - Saturday can be `S` Sunday can be `U`
  
## Example Program
### An example executable (program) is provided in this repository.
- You should be able to run it from your project folder in a Linux environment. 
- If you encounter a “permission denied” error when attempting to run the executable, type  
```chmod u+x snowfallExecutable```  
into the terminal and try running the executable again.
 
## Submission Details
If you are usinng git from the command line, execute the following commands:
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
