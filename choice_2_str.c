#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//fill array with matching student names
int choice_2_str(int i, Node **array, Node *head, char last[256])
{
    Node *student = head;
    while (student != NULL)
    {
        char *sub = strstr(student->Student.student_name, last);

        if (sub != NULL)
        {
            array[i] = student;
            i++;
        }
        student = student->next;
    }
    return i;
}
