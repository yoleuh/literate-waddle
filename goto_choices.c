#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void choice_arraying(void (*choice_array[10])(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output));

//go to function that user chose
void goto_choices(Node *head, int c, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
    void (*choice_array[10])(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
    choice_arraying(choice_array);
    if ((c >= 0) && (c <= 10))
    {
        choice_array[c - 1](head, Category_Names, count, output_file, output);
    }
}

