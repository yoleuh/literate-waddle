#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//count number of students in list
int count_list(Node *head)
{
    int count = 0;
    Node *traverse = head;
    while (traverse != NULL)
    {
        count++;
        traverse = traverse->next;
    }
    return count;
}
