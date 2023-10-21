#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void delete(Node **head, int id);

//print delete confirmation 
void print_choice_9(Node **head, int id, char name[256])
{
    printf("Do you really want to delete student ID number %d, %s ?\nIf yes, enter 1.  If no, enter 2:  ", id, name);
    int c;
    scanf(" %d", &c);
    if (c == 1)
    {
//delete student from list
        delete (head, id);
        printf("student ID number %d, %s  has been deleted.", id, name);
    }
}
