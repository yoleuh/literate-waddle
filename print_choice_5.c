#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//print recalculated data
void print_choice_5(Node *student, char Category_Names[4][15])
{
    printf("Student Name: %-22s", student->Student.student_name);
    if (student->Student.Cat1.Cumulative != -1)
        printf("%s Cumlative:  %6.2f\t", Category_Names[0], student->Student.Cat1.Cumulative);
    else
        printf("%s Cumlative:  %s\t", Category_Names[0], " n/a");
    if (student->Student.Cat2.Cumulative != -1)
        printf("%s Cumlative:  %6.2f\t", Category_Names[1], student->Student.Cat2.Cumulative);
    else
        printf("%s Cumlative:  %s\t", Category_Names[1], " n/a");
    if (student->Student.Cat3.Cumulative != -1)
        printf("%s Cumlative:  %6.2f\t", Category_Names[2], student->Student.Cat3.Cumulative);
    else
        printf("%s Cumlative:  %s\t", Category_Names[2], " n/a");
    if (student->Student.Cat4.Cumulative != -1)
        printf("%s Cumlative:  %6.2f ", Category_Names[3], student->Student.Cat4.Cumulative);
    else
        printf("%s Cumlative:  %s\t", Category_Names[3], " n/a");
    if (student->Student.Current_Grade != -1)
        printf("Current Grade is:  %6.2f\n", student->Student.Current_Grade);
    else
        printf("Current Grade is:  %s\t", " n/a");
}
