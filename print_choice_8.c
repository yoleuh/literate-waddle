#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
Node *createNode(char *student_name, int student_id, float *scores1, float *scores2, float *scores3, float *scores4);
void insertNode(Node **head, Node *newNode);
void print_student(Node *student);
void printHeader(char *Category_Names);

//print new student's data
void print_choice_8(Node **head, char Category_Names[4][15], char student_name[256], int student_id, float scores1[3], float scores2[3], float scores3[3], float scores4[3])
{
//create new node and populate with data
    Node *newNode = createNode(student_name, student_id, scores1, scores2, scores3, scores4);
    insertNode(head, newNode);
//print confirmation and new data
    printf("\n%s, Student ID# %d has been added with the following information:\n", student_name, student_id);
    printHeader(*Category_Names);
    print_student(newNode);
}
