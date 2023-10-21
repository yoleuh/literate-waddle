#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"
void choice_8_assign(char Category_Name[15], float scores[3]);
void print_choice_8(Node **head, char Category_Names[4][15], char student_name[256], int student_id, float scores1[3], float scores2[3], float scores3[3], float scores4[3]);
int ID_isduplicate(Node *head, int newStudentID);

//add a new student to the class
void choice_8(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output)
{
    char student_name[256];
    int student_id;
    float scores1[3], scores2[3], scores3[3], scores4[3];
//get new student data
    printf("Enter the Student's Name: ");
    scanf(" %s", student_name);
    printf("\nEnter the Student's ID Number: ");
    scanf(" %d", &student_id);
//check if student id exists
    if (ID_isduplicate(head, student_id) == FALSE)
    {
//assign new grades to student
        choice_8_assign(Category_Names[0], scores1);
        choice_8_assign(Category_Names[1], scores2);
        choice_8_assign(Category_Names[2], scores3);
        choice_8_assign(Category_Names[3], scores4);
//print
        print_choice_8(&head, Category_Names, student_name, student_id, scores1, scores2, scores3, scores4);
    }
    else
        printf("Student ID Number entered was a duplicate.");
}
