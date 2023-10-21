
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//outputs averages to file
void fprint_avg(char Category_Names[4][15], int count, float avg[5], FILE *output_file)
{
    fprintf(output_file, "\nClass Averages for ");
    for (int i = 0; i < 4; i++)
    {
        avg[i] /= count;
        fprintf(output_file, "%s: %.2f, ", Category_Names[i], avg[i]);
    }
    avg[4] /= count;
    fprintf(output_file, "Current Grade  %.2f\n", avg[4]);
}
