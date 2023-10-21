#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//assign scores to student
void choice_8_assign(char Category_Name[15], float scores[3])
{
    char num[3][10] = {"first", "second", "third"};
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %s %s score (use -1 if there is no score): ", num[i], Category_Name);
        scanf(" %f", &scores[i]);
    }
}
