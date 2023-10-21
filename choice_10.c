#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
int count_list(Node *head) ;
void fprintHeader(char *Category_Names, FILE *output_file);
void fprint_student(struct Node *student, FILE *output_file);
void calculate_avg_f(struct Node *head, char Category_Names[4][15], int count, FILE *output_file);

//print student list to output file
void choice_10(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
//get updated student count
    count = count_list(head);
    Node *temp = head;
    if (temp != NULL)
    {
        printf("A total of %d student records were written to file %s\n", count, output);
        fprintHeader(*Category_Names, output_file);
        while (temp != NULL)
        {
            fprint_student(temp, output_file);
            temp = temp->next;
        }
        calculate_avg_f(head, Category_Names, count, output_file);
    }
    else
        printf("No students in file\n");
}
