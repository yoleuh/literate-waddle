#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void print_choice_6_grade(Node *student, char Category_Names[4][15], float score, int cat, int which);

//get new score
void print_choice_6(Node *student, char Category_Names[4][15])
{
//confirm
    printf("Insert a Score for %s ?  Enter 1, if yes. Enter 2, if no:  ", student->Student.student_name);
    int c;
    scanf(" %d", &c);
    if (c == 1)
    {

//get category
        printf("\nWhich category?\n1) %s\n2) %s\n3) %s\n4) %s\n", Category_Names[0], Category_Names[1], Category_Names[2], Category_Names[3]);
        int cat;
        scanf(" %d", &cat);
//get which score
        printf("Which score?\nEnter 1, 2, or 3\n");
        int s;
        scanf(" %d", &s);
//get the score
        printf("Enter New Score:  \n");
        float score;
        scanf(" %f", &score);
//print new score
        print_choice_6_grade(student, Category_Names, score, cat, s);
    }
}

