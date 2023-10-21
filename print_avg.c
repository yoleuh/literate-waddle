#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//print averages
void print_avg(char Category_Names[4][15], int count, float avg[5])
{
    printf("\nClass Averages for ");
    for (int i = 0; i < 4; i++)
    {
        avg[i] /= count;
        printf("%s: %.2f, ", Category_Names[i], avg[i]);
    }
    avg[4] /= count;
    printf("Current Grade  %.2f\n", avg[4]);
}
