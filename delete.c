#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//delete student from list
void delete(Node **head, int id)
{
    Node *traversePtr = *head;
    Node *priorNode = NULL;
    while (traversePtr != NULL)
    {
        if (traversePtr->Student.student_ID == id)
        {
            if (priorNode == NULL)
                *head = priorNode->next;
            else
                priorNode->next = traversePtr->next;
//free pointer
            free(traversePtr);
        }
        priorNode = traversePtr;
        traversePtr = traversePtr->next;
    }
}
