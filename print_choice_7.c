#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_student(Node *student);


//calculate the final grades and print
void print_choice_7(Node *student)
{
    float grade = 0;
    grade += (student->Student.Cat1.Cumulative * 0.15);
    grade += (student->Student.Cat2.Cumulative * 0.30);
    grade += (student->Student.Cat3.Cumulative * 0.20);
    grade += (student->Student.Cat4.Cumulative * 0.35);
//assign grade to student and print
    student->Student.Final_Grade = grade;
    print_student(student);
}
