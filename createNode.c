#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void populate(Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4);
void populate_cumulative(Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4);
void populate_main(char *student_name, int student_id, Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4);
//create node for a student with data
Node *createNode(char *student_name, int student_id, float *scores1, float *scores2, float *scores3, float *scores4)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Error allocating memory for a new node\n");
        exit(EXIT_FAILURE);
    }
//populate node with data
    populate_main(student_name, student_id, newNode, scores1, scores2, scores3, scores4);
    populate(newNode, scores1, scores2, scores3, scores4);
    populate_cumulative(newNode, scores1, scores2, scores3, scores4);
    newNode->next = NULL;

    return newNode;
}
