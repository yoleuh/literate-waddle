#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void print_student(Node *student);
void printHeader(char *Category_Names);

//print list of students
void print_choice_2_list(int i, char Category_Names[4][15], Node **array)
{
    for (int x = 0; x < i; x++)
    {
        printf("%d) %s\n", x + 1, array[x]->Student.student_name);
    }
//print student data
    printf("Please indicate which student you want: ");
    int c;
    scanf(" %d", &c);
    printHeader(*Category_Names);
    print_student(array[c - 1]);
}
