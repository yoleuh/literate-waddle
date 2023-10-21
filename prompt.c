#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void goto_choices(Node *head, int c, char Category_Names[4][15], int count, FILE *output_file, char *output);
void print_choices(void);

//prompt user with options and get user choice
void prompt(char *input, FILE *output_file, int count, Node *head, char Category_Names[4][15], char *output)
{
    int c;
while(c!=10){
    printf("\nPlease enter an option between 1 and 10:\n");
    print_choices();
    printf("Option :");
    scanf(" %d", &c);
    goto_choices(head, c, Category_Names, count, output_file, output);
}
}
