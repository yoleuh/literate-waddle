#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//assign new score to student
void choice_6_assign(struct Cat_Grade *cat, int which, float score)
{
    if (which == 1)
        cat->score1 = score;
    else if (which == 2)
        cat->score2 = score;
    else if (which == 3)
        cat->score3 = score;
}
