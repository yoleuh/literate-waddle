#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void print_choice_7(Node *student);
void printHeader(char *Category_Names);
void calculate_avg(Node *head, char Category_Names[4][15], int count);

//calculate final grades
void choice_7(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
    Node *student = head;
    if (student != NULL)
    {
        printHeader(*Category_Names);
        while (student != NULL)
        {
            print_choice_7(student);
            student = student->next;
        }
//get averages
        calculate_avg(head, Category_Names, count);
    }
    else
        printf("No students in file\n");
}
