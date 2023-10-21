#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void fprint_avg(char Category_Names[4][15], int count, float avg[5], FILE *output_file);

//calculate student's averages and outputs to file
void calculate_avg_f(Node *head, char Category_Names[4][15], int count, FILE *output_file)
{
    float avg[5] = {0};

    Node *temp = head;
    while (temp != NULL)
    {
        avg[0] += temp->Student.Cat1.Cumulative;
        avg[1] += temp->Student.Cat2.Cumulative;
        avg[2] += temp->Student.Cat3.Cumulative;
        avg[3] += temp->Student.Cat4.Cumulative;
        avg[4] += temp->Student.Current_Grade;
        temp = temp->next;
    }
    fprint_avg(Category_Names, count, avg, output_file);
}
