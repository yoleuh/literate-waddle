# literate-waddle
You will write a program to access, process and store data in order to calculate grades for a class.
The program will execute in the following format:
 lab4 filename1 filename2
where lab4 is the name of the executable
 filename1 is the data file that contains the current class records to read in from disk
 filename2 is a data file that your program will create with the updated class records
This means that you will have to read two parameters from the command line. The two parameters
can be the same filename, so you will have to close filename1 before opening filename2 to insure that
you do not end up with corrupted data.
You will be supplied with a “test” class grade file called class_records. All of the data for the
students in the class grade computing system will be in this file. Once the program has read in the
student data, a user will be able to select options related to what to do with the data. You do not know
the number of different students which will be in the file, so your code must be able to deal with an
indeterminate number of different students (up to the limits of memory). If any grade slot does not
have a current valid score, its value will be -1.
First, your program should open the file specified by the filename1 parameter and read in the initial
class records. There will be options for adding or deleting students provided to the user later by the
program after the initial data is read in and used to build the linked list. The data will be entered in the
following format, with each item of data listed entered on a different line:

OPTIONS:
1. Print a single student record with all stored information along with the calculated scores.
The student record is requested by student ID number; if you see a score is listed as -1,
print “n/a”. Format it in a readable manner. All information for a single student should
fit on a single line. You may want to print out a line with column headers on it prior to
printing out the data. There is a printHeader.c file uploaded on Piazza that prints a
header line with appropriate spacing. You may use it if you wish.
2. Print a single student record with all stored information along with the calculated scores.
The student record is requested by student last name; (This function will likely require
using the strstr() or a similar C Library function. If you see a score is listed as -1, print
“n/a”. Format it in a readable manner. All information for a single student should fit on a
single line. You may want to print out a line with column headers on it prior to printing
out the data.
3. Print all student records with all stored information along with the calculated scores
sorted by student ID number; if you see a score is listed as -1, print “n/a”. Format it in a
readable manner. All information for a single student should fit on a single line. You
may want to print out a line with column headers on it prior to printing out the data.
Include with this data a summary line that lists the average score for each category across
all students and an average
4. Recalculate all of a single student’s grades (assume that new scores have been entered
since the last calculation) and print out the student’s name, the four current cumulatives by
category and their current overall grade. The student will be selected by student ID
number.
5. Recalculate all student’s grades (assume that new scores have been entered since the last 
calculation) and print out each student’s name, the four current cumulatives by category
and their current overall grade.
6. Insert a new score for a single student ID #. You will need to ask which category it’s for
and whether it should be stored in the first, second or third score position.
7. Calculate Final Grades. Calculate the final grade and store it in the appropriate spot for each
student. The final grade should be calculated based on the following weighting system:
Category 1 cumulative = 15% of the grade, Category 2 cumulative = 30% of the grade, Category
3 cumulative = 20% of the grade and Category 4 cumulative is 35% of the grade. If any
category cumulative score is -1, then use a score of 0 in this calculation. Then call option 5
from here to print out all student information. NOTE that this calculation is different than the
calculation for Current Cumulative Grade.
8. Add a new student to the class. You will have to prompt for each data item.
9. Delete a student (prompt the user to enter a student ID number to delete): if the student is not
found in the linked list, print a message indicating an error, or if the list is empty, print an
error indicating that);
10.Exit the program. (This option would write all current records in the linked list out to disk
using filename2 from the command line and would also free all dynamically allocated
memory.) The information that you save in filename2 should be able to be used as input
to this program the next time it is executed.
The user will enter a choice of one of these ten options by entering 1 - 10 immediately followed
by enter (new line). You can assume that all user input will be correct, except that the user may
inadvertently attempt to delete a student which has not been added to the class. You should write
a separate function to do the necessary computations and print output for each of these options.
Some of these functions may call some of the other functions. The goal is to make main() as small
and succinct as possible, while creating functions that make it as easy as possible to monitor,
modify and execute the code. You should also write a separate function to read the data for a
single student from stdin into a node after allocating storage for the node. 
