#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void prompt(char *input, FILE *output_file, int count, struct Node *head, char Category_Names[4][15], char *output);
int count_list(Node *head);
void free_list(Node **head);

//print file read confirmation and calls functions to next steps
void print_stuff(char *input, char *output, struct Node *head, char Category_Names[4][15])
{
    FILE *output_file;
    output_file = fopen(output, "w");
    if (output_file == NULL)
    {
        printf("Can't open file \n");
        exit(EXIT_FAILURE);
    }
//get student count
    int count = count_list(head);
    printf("Reading student information from file \"%s\"\n", input);
    printf("A total of %d student records were read from the file class_records\n\n\n", count);
//prompt user with 10 options
    prompt(input, output_file, count, head, Category_Names, output);
//close output file
    fclose(output_file);
//free list
    free_list(&head);
}
