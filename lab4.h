struct Cat_Grade{ float score1; float score2; float score3;
float Cumulative; };
struct Data {
char student_name[40];
int student_ID;
struct Cat_Grade Cat1; struct Cat_Grade Cat2; struct Cat_Grade Cat3;
struct Cat_Grade Cat4; float Current_Grade; float Final_Grade;
};
typedef struct Node {
struct Data Student;
struct Node *next; } Node;

#define TRUE 1
#define FALSE 0
