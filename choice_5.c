#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_choice_5(Node *student, char Category_Names[4][15]);

//recalculate and print grades for all students
void choice_5(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
    Node *temp = head;
    if (temp != NULL)
    {
        printf("\n");
        while (temp != NULL)
        {
            print_choice_5(temp, Category_Names);
            temp = temp->next;
        }
    }
    else
        printf("No students in file\n");
}
