#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_choice_4(Node *student, char Category_Names[4][15]);

//recalculate and print student score
void choice_4(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
    printf("\nWhat is the Student ID for the scores you want to recalculate?\n Student ID: ");
    int id;
    scanf(" %d", &id);
    Node *student = head;
    if (student != NULL)
    {
//get student 
        while (student != NULL)
        {
            if (student->Student.student_ID == id)
            {
                printf("\nRecalculating grades for %s , Student ID Number: %d\n", student->Student.student_name, id);
//recalculate
                print_choice_4(student, Category_Names);
            }
            student = student->next;
        }
    }
    else
        printf("Student id %d is not valid\n", id);
}
