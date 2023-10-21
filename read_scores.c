#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

Node *createNode(char *student_name, int student_id, float *scores1, float *scores2, float *scores3, float *scores4);

//read scores from inpit
Node *read_scores(char student_name[256], int student_id, FILE *input_file)
{
    float scores1[3], scores2[3], scores3[3], scores4[3];
//get scores for each category
    for (int i = 0; i < 3; i++)
    {
        fscanf(input_file, "%f", &scores1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        fscanf(input_file, "%f", &scores2[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        fscanf(input_file, "%f", &scores3[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        fscanf(input_file, "%f", &scores4[i]);
    }
//create new node for the student
    Node *newNode = createNode(student_name, student_id, scores1, scores2, scores3, scores4);
    return newNode;
}
