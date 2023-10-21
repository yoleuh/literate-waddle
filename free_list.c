#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//frees list 
void free_list(Node **head)
{
    Node *traverse = *head;
    while (traverse != NULL)
    {
        Node *temp = traverse;
        traverse = traverse->next;
        free(temp);
    }
    *head = NULL;
}
