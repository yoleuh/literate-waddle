#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
    int if_9(Node *head, Node * student, int id);

//delete student from list
void choice_9(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
    printf("Please enter the student ID  number you wish to delete, followed by enter.\n");
    int id;
    scanf(" %d", &id);
    Node *student = head;
int found = 0;
if (student != NULL){
//get student
    while (student != NULL)
    {
//check if student id == id
found = if_9(head, student, id);
        student = student->next;
}}
else
printf("File is empty");
if(found==0)
printf("student not found");
}
