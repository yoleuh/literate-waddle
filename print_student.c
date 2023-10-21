#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_scores(struct Cat_Grade cat);

//print student name, id, and grades
void print_student(Node *student)
{
    printf("%-22s\t%5d\t", student->Student.student_name, student->Student.student_ID);
//call to print scores
    print_scores(student->Student.Cat1);
    print_scores(student->Student.Cat2);
    print_scores(student->Student.Cat3);
    print_scores(student->Student.Cat4);
//print n/a if scores are -1
    if (student->Student.Current_Grade == -1)
        printf("  %s\t", "n/a");
    else
        printf("%6.2f\t", student->Student.Current_Grade);
    if (student->Student.Final_Grade == -1)
        printf("  %s\t\n", "n/a");
    else
        printf("%6.2f\t\n", student->Student.Final_Grade);
}
