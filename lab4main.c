#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

int if_9(Node *head, Node * student, int id);
void read(FILE *input_file, char Category_Names[4][15], Node **head);
Node *createNode(char *student_name, int student_id, float *scores1, float *scores2, float *scores3, float *scores4);
void insertNode(Node **head, Node *newNode);
void populate(Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4);
void populate_cumulative(Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4);
float cumulate(float *scores);
float calculate_current(float cum_1, float cum_2, float cum_3, float cum_4);
void printHeader(char *Category_Names);
int count_list(Node *head);
void goto_choices(Node *head, int c, char Category_Names[4][15], int count, FILE *output_file, char *output);
void print_student(Node *student);
void print_scores(struct Cat_Grade cat);
void choice_1(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_2(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void print_choice_2(int i, char Category_Names[4][15], Node **array, char last[256]);
void print_choice_2_list(int i, char Category_Names[4][15], Node **array);
void prompt(char *input, FILE *output_file, int count, struct Node *head, char Category_Names[4][15], char *output);
void print_choices(void);
void choice_3(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void calculate_avg(Node *head, char Category_Names[4][15], int count);
void print_avg(char Category_Names[4][15], int count, float avg[5]);
void choice_4(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void print_choice_4(Node *student, char Category_Names[4][15]);
void choice_5(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void print_choice_5(Node *student, char Category_Names[4][15]);
void choice_6(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void print_choice_6(Node *student, char Category_Names[4][15]);
void print_choice_6_grade(Node *student, char Category_Names[4][15], float score, int cat, int which);
void choice_6_assign(struct Cat_Grade *cat, int which, float score);
void choice_7(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_8(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void choice_8_assign(char Category_Names[15], float scores[3]);
void print_choice_8(Node **head, char Category_Names[4][15], char student_name[256], int student_id, float scores1[3], float scores2[3], float scores3[3], float scores4[3]);
void choice_9(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void print_choice_9(Node **head, int id, char name[256]);
void delete(Node **head, int id);
int ID_isduplicate(Node *head, int newStudentID);
void fprintHeader(char *Category_Names, FILE *output_file);
void fprint_student(struct Node *student, FILE *output_file);
void fprint_scores(struct Cat_Grade cat, FILE *output_file);
void calculate_avg_f(struct Node *head, char Category_Names[4][15], int count, FILE *output_file);
void choice_10(struct Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output);
void fprint_avg(char Category_Names[4][15], int count, float avg[5], FILE *output_file);
void print_stuff(char *input, char *output, struct Node *head, char Category_Names[4][15]);
void free_list(Node **head);
Node *read_scores(char student_name[256], int student_id, FILE *input_file);
void populate_main(char *student_name, int student_id, Node *newNode, float *scores1, float *scores2, float *scores3, float *scores4);
void choice_arraying(void (*choice_array[10])(Node *head, char Category_Names[4][15], int count, FILE *output_file, char *output));
int choice_2_str(int i, Node **array, Node *head, char last[256]);
void print_choice_7(Node *student);

int main(int argc, char **argv)
{
//get file names
    if (argc != 3)
    {
        printf("Usage: %s input_file output_file\n", argv[0]);
    }

    char *input = argv[1];
    char *output = argv[2];
//open input file
    FILE *input_file;
    input_file = fopen(input, "r");

    if (input_file == NULL)
    {
        printf("Can't open file \n");
        exit(EXIT_FAILURE);
    }

    char Category_Names[4][15];
    Node *head = NULL;
//read the input file
    read(input_file, Category_Names, &head);

//print confirmation and next steps
    print_stuff(input, output, head, Category_Names);
    return 0;
}
