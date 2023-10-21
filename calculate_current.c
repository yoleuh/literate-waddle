#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

// calculate current scores for student
float calculate_current(float cum_1, float cum_2, float cum_3, float cum_4)
{
//Category 1 cumulative = 15% of the grade, Category 2 cumulative = 30% of the grade, Category 3 cumulative = 20% of the grade and Category 4 cumulative is 35% of the grade. If any category cumulative score is -1, then use a score of 100 in this calculation.
    float current_grade = 0;
    if (cum_1 == -1)
        current_grade += 100 * 0.15;
    else
        current_grade += cum_1 * 0.15;

    if (cum_2 == -1)
        current_grade += 100 * 0.30;
    else
        current_grade += cum_2 * 0.30;

    if (cum_3 == -1)
        current_grade += 100 * 0.20;
    else
        current_grade += cum_3 * 0.20;

    if (cum_4 == -1)
        current_grade += 100 * 0.35;
    else
        current_grade += cum_4 * 0.35;

    return current_grade;
}
