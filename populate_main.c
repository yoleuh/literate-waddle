#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//populate student with name, id, and scores
void populate_main(char *student_name, int student_id, Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4)
{
    strcpy(newNode->Student.student_name, student_name);
    newNode->Student.student_ID = student_id;

    newNode->Student.Cat1.score1 = scores1[0];
    newNode->Student.Cat2.score1 = scores2[0];
    newNode->Student.Cat3.score1 = scores3[0];
    newNode->Student.Cat4.score1 = scores4[0];
}
