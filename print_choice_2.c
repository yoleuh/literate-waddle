#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_student(Node *student);
void printHeader(char *Category_Names);
void print_choice_2_list(int i, char Category_Names[4][15], Node **array);

//print how many students were found
void print_choice_2(int i, char Category_Names[4][15], Node **array, char last[256])
{
    if (i > 1)
    {
//print array of matching students to choose from
        printf("There is more than one student by that name.\n");
        print_choice_2_list(i, Category_Names, array);
    }
    else if (i == 1)
    {
//print singular student
        printHeader(*Category_Names);
        print_student(array[0]);
    }
    else
    {
        printf("Student's Last Name %s is not valid\n", last);
    }
    free(array);
}
