#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

float cumulate(float *scores);
float calculate_current(float cum_1, float cum_2, float cum_3, float cum_4);

//populate student iwth cumulative scores
void populate_cumulative(Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4)
{
//call cumulate to get cumulative score
    float cum_1 = cumulate(scores1);
    newNode->Student.Cat1.Cumulative = cum_1;

    float cum_2 = cumulate(scores2);
    newNode->Student.Cat2.Cumulative = cum_2;

    float cum_3 = cumulate(scores3);
    newNode->Student.Cat3.Cumulative = cum_3;

    float cum_4 = cumulate(scores4);
    newNode->Student.Cat4.Cumulative = cum_4;

    newNode->Student.Current_Grade = calculate_current(cum_1, cum_2, cum_3, cum_4);
    newNode->Student.Final_Grade = -1;
}
