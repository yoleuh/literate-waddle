#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void choice_6_assign(struct Cat_Grade *cat, int which, float score);
void printHeader(char *Category_Names);
void print_student(Node *student);

//print out new grade
void print_choice_6_grade(Node *student, char Category_Names[4][15], float score, int cat, int which)
{
//get new score
    if (cat == 1)
        choice_6_assign(&student->Student.Cat1, which, score);
    else if (cat == 2)
        choice_6_assign(&student->Student.Cat2, which, score);
    else if (cat == 3)
        choice_6_assign(&student->Student.Cat3, which, score);
    else if (cat == 4)
        choice_6_assign(&student->Student.Cat4, which, score);
    printHeader(*Category_Names);
    print_student(student);
}
