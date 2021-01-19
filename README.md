# ProgrammingAssignment1

## Project Goals
The goal of this project is to:
1.	Familiarize students with **variables**
2.  Familiarize students with the **printf** and **scanf** functions.
3.  Familiarize students with **arithmetics expressions**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```reservations.c```

## Program
Leave the lights on!  

We’re going to build a program for managing room reservations.   

**The program should behave as follows:**  
We’ll be getting the customer’s number of nights and we’ll also be getting the price of the room for one night. Then we’ll get the type of the room, which should be one of the following characters: D Q or K (for Double, Queen, or King). We’ll do that for all four reservations.  

The program should then display the reservations back to the user, including the total price for their stay! It should display each of the items in a table that the program creates. Please run the provided executable for an example of the table’s format. Use the formatting techniques learned for conversion specifiers and formatted IO. **Your program’s table should be exactly the same as the table in the provided program.**

### Input:
The user should be prompted for a set of three values which represent the number of nights, the price per night, and the room type for the first reservation. The number of nights should be a whole number. The price per night should be a decimal number. The room type should be a single character. The user should enter all three values on one line, separated by spaces. The user should then be prompted for the remaining three reservations.  

Example (the highlighted part is what the program displays and the italicized part is the user input):  
```Reservation 1 (#nights price type): ``` *3 59.99 D*

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x reservationsExecutable``` into the terminal and try running the executable again.
### Hints:
- The vertical line is called a pipe. It's on your keyboard, if you use the Shift + \ key (above the Enter key).
- The double lines are equals (=) and the single lines are dashes (-).
- Make sure you try out different test cases!
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
