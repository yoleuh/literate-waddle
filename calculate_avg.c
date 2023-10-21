#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_avg(char Category_Names[4][15], int count, float avg[5]);

//calculate average
void calculate_avg(Node *head, char Category_Names[4][15], int count)
{
    float avg[5] = {0};

    Node *traverse = head;
    while (traverse != NULL)
    {
        avg[0] += traverse->Student.Cat1.Cumulative;
        avg[1] += traverse->Student.Cat2.Cumulative;
        avg[2] += traverse->Student.Cat3.Cumulative;
        avg[3] += traverse->Student.Cat4.Cumulative;
        avg[4] += traverse->Student.Current_Grade;
        traverse = traverse->next;
    }
//print
    print_avg(Category_Names, count, avg);
}
