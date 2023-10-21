#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_student(Node *student);
void printHeader(char *Category_Names);

//print student by id search
void choice_1(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
//get student id
    printf("\nEnter the Student ID #: ");
    int id;
    scanf(" %d", &id);
    printf("\nHunting for %d\n", id);
    Node *student = head;
//print no students if list is empty
    if (student != NULL)
    {
//find student based on id
        while (student != NULL)
        {
            if (student->Student.student_ID == id)
            {
                printHeader(*Category_Names);
                print_student(student);
            }
            student = student->next;
        }
    }
    else
        printf("No students in file\n");
}
