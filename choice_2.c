#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

int choice_2_str(int i, Node **array, Node *head, char last[256]);
void print_choice_2(int i, char Category_Names[4][15], Node **array, char last[256]);
void print_choice_2_list(int i, char Category_Names[4][15], Node **array);

//print student based on last name
void choice_2(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
//get student name
    printf("\nEnter the Student's Last Name: ");
    char last[256];
    scanf(" %s", last);
    printf("\nHunting for %s\n", last);
//create array of students with matching name
    Node **array = (Node **)malloc(256 * sizeof(Node *));
    if (array == NULL)
    {
        printf("Error allocating memory for a new node\n");
        exit(EXIT_FAILURE);
    }
//number of students with matching name
    int i = 0;

    i = choice_2_str(i, array, head, last);

    print_choice_2(i, Category_Names, array, last);
}
