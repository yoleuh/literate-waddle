#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

//output header to file
void fprintHeader(char *Category_Names, FILE *output_file)
{
    fprintf(output_file, "\nStudent Name\t   Student ID#\t\t%s\t\t\t\t%s\t\t\t%s\t\t\t%s\t\t\tCurrent\tFinal\n",
            Category_Names, (char *)Category_Names + 15, (char *)Category_Names + 30, (char *)Category_Names + 45);
    fprintf(output_file, "\t\t\t\t  1       2       3       Cum\t   1       2       3     Cum\t   1       2       3       Cum     1       2       3      Cum\tGrade\tGrade\n");
}
