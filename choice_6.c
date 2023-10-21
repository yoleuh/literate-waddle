#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void print_choice_6(Node *student, char Category_Names[4][15]);

//insert new score for a student
void choice_6(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
//get student
    printf("\nEnter the Student ID #: ");
    int id;
    scanf(" %d", &id);
    printf("\nHunting for %d\n", id);
    Node *student = head;
    if (student != NULL)
    {
        while (student != NULL)
        {
            if (student->Student.student_ID == id)
            {
//get new score
                print_choice_6(student, Category_Names);
            }
            student = student->next;
        }
    }
    else
        printf("Student id %d is not valid\n", id);
}
