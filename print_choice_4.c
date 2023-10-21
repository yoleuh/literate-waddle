#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//print recalculated scores
void print_choice_4(Node *student, char Category_Names[4][15])
{
    printf("%s Cumlative:  %.2f\n", Category_Names[0], student->Student.Cat1.Cumulative);
    printf("%s Cumlative:  %.2f\n", Category_Names[1], student->Student.Cat2.Cumulative);
    printf("%s Cumlative:  %.2f\n", Category_Names[2], student->Student.Cat3.Cumulative);
    printf("%s Cumlative:  %.2f\n", Category_Names[3], student->Student.Cat4.Cumulative);
    printf("Current Grade is:  %.2f\n", student->Student.Current_Grade);
    if (student->Student.Final_Grade == -1)
        printf("Student's Final Grade was deleted\n");
    else
        printf("Final Grade is:  %.2f\n", student->Student.Final_Grade);
}
