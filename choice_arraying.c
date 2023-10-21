#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void choice_1(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_2(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_3(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_4(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_5(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_6(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_7(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_8(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_9(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_10(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);

//creates functions
void choice_arraying(void (*choice_array[10])(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output))
{
    choice_array[0] = choice_1;
    choice_array[1] = choice_2;
    choice_array[2] = choice_3;
    choice_array[3] = choice_4;
    choice_array[4] = choice_5;
    choice_array[5] = choice_6;
    choice_array[6] = choice_7;
    choice_array[7] = choice_8;
    choice_array[8] = choice_9;
    choice_array[9] = choice_10;
}
