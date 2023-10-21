#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//populate with the rest of the scores
void populate(Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4)
{
    newNode->Student.Cat1.score2 = scores1[1];
    newNode->Student.Cat2.score2 = scores2[1];
    newNode->Student.Cat3.score2 = scores3[1];
    newNode->Student.Cat4.score2 = scores4[1];
    newNode->Student.Cat1.score3 = scores1[2];
    newNode->Student.Cat2.score3 = scores2[2];
    newNode->Student.Cat3.score3 = scores3[2];
    newNode->Student.Cat4.score3 = scores4[2];
}
