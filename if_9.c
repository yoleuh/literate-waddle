#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void print_choice_9(Node **head, int id, char name[256]);

    int if_9(Node *head, Node * student, int id)
    {
        int x = 0;
        if (student->Student.student_ID == id)
        {
            //delete student
            print_choice_9(&head, id, student->Student.student_name);
            x = 1;
        }
        return x;
    }
