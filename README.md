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
