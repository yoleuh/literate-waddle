#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//print scores for the category
void print_scores(struct Cat_Grade cat)
{
//if scores are -1, print n/a
    if (cat.score1 == -1)
        printf("  %s\t", "n/a");
    else
        printf("%6.2f\t", cat.score1);
    if (cat.score2 == -1)
        printf("  %s\t", "n/a");
    else
        printf("%6.2f\t", cat.score2);
    if (cat.score3 == -1)
        printf("  %s\t", "n/a");
    else
        printf("%6.2f\t", cat.score3);
    if (cat.Cumulative == -1)
        printf("  %s\t", "n/a");
    else
        printf("%6.2f\t", cat.Cumulative);
}
