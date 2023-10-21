#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//output student scores to file
void fprint_scores(struct Cat_Grade cat, FILE *output_file)
{
//output n/a if score is -1
    if (cat.score1 == -1)
        fprintf(output_file, "  %s\t", "n/a");
    else
        fprintf(output_file, "%6.2f\t", cat.score1);
    if (cat.score2 == -1)
        fprintf(output_file, "  %s\t", "n/a");
    else
        fprintf(output_file, "%6.2f\t", cat.score2);
    if (cat.score3 == -1)
        fprintf(output_file, "  %s\t", "n/a");
    else
        fprintf(output_file, "%6.2f\t", cat.score3);
    if (cat.Cumulative == -1)
        fprintf(output_file, "  %s\t", "n/a");
    else
        fprintf(output_file, "%6.2f\t", cat.Cumulative);
}
