#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_student(Node *student);
void calculate_avg(Node *head, char Category_Names[4][15], int count);
void printHeader(char *Category_Names);

//print all students
void choice_3(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
    printHeader(*Category_Names);
    Node *traverse = head;
//loop through all students
    if (traverse != NULL)
    {
        while (traverse != NULL)
        {
            print_student(traverse);
            traverse = traverse->next;
        }
//get average of students
        calculate_avg(head, Category_Names, count);
    }
    else
        printf("No students in file\n");
}
