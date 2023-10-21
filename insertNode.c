#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//insert student node in to list
void insertNode(Node **p2p2change, Node *newnode)
{
//if list is empty or if student is the smallest id in the list
    if (*p2p2change == NULL || newnode->Student.student_ID < (*p2p2change)->Student.student_ID)

    {
//put student at the start
        newnode->next = *p2p2change;
        *p2p2change = newnode;
    }
    else
    {
        /* skip nodes with smaller data than data to insert */
        while (*p2p2change != NULL && (**p2p2change).Student.student_ID < newnode->Student.student_ID)
        {
            p2p2change = &((**p2p2change).next);
        }
        /* do the insert: */
        /* make new node next point to what the changing pointer currently points to */
        newnode->next = *p2p2change;
        /* make the pointer to change point to the new node */
        *p2p2change = newnode;
    }
}
