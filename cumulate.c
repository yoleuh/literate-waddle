#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//calculate cumulative scores
float cumulate(float *scores)
{
    float cumulative = -1;
//If the scores 95 88 89, then add the three scores and divide by 3.
    if (scores[0] != -1 && scores[1] != -1 && scores[2] != -1)
    {
        cumulative = (scores[0] + scores[1] + scores[2]) / 3.0;
    }
//If the scores are 95 88 -1, then add the first two scores and divide by 2.
    else if (scores[0] != -1 && scores[1] != -1 && scores[2] == -1)
    {
        cumulative = (scores[0] + scores[1]) / 2.0;
    }
//If a category has the scores 95 -1 -1, then the cumulative score is 95.00.
    else if (scores[0] != -1 && scores[1] == -1 && scores[2] == -1)
    {
        cumulative = scores[0];
    }
    return cumulative;
}
