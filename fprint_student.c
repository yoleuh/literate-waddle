#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void fprint_scores(struct Cat_Grade cat, FILE *output_file);

//output student data to file
void fprint_student(Node *student, FILE *output_file)
{
    fprintf(output_file, "%-22s\t%5d\t", student->Student.student_name, student->Student.student_ID);
    fprint_scores(student->Student.Cat1, output_file);
    fprint_scores(student->Student.Cat2, output_file);
    fprint_scores(student->Student.Cat3, output_file);
    fprint_scores(student->Student.Cat4, output_file);
    if (student->Student.Current_Grade == -1)
        fprintf(output_file, "  %s\t", "n/a");
    else
        fprintf(output_file, "%6.2f\t", student->Student.Current_Grade);
    if (student->Student.Final_Grade == -1)
        fprintf(output_file, "  %s\t\n", "n/a");
    else
        fprintf(output_file, "%6.2f\t\n", student->Student.Final_Grade);
}
