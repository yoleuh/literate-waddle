#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

Node *read_scores(char student_name[256], int student_id, FILE *input_file);
void insertNode(Node **head, Node *newNode);

//read input file
void read(FILE *input_file, char Category_Names[4][15], Node **head)
{
//get the category names
    for (int i = 0; i < 4; i++)
    {
        fscanf(input_file, " %s", Category_Names[i]);
    }

//while next line is not eof
    while (1)
    {
        char student_name[256];
        int student_id;

//break if eof
        if (fscanf(input_file, " %[^\n]", student_name) == EOF)
            break;

//get student id
        fscanf(input_file, " %d", &student_id);
//get student scores
        Node *newNode = read_scores(student_name, student_id, input_file);
//insert student into linked list
        insertNode(head, newNode);
    }
//close input 
    fclose(input_file);
}
