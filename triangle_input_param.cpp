#include <stdio.h>
#include "triangle_input_param.h"

void triangle_input_param(FILE *myfile, int * rows) {
    printf("start enter number of rows of triangle_matrix\n");
    fscanf(myfile, "%d", rows);
    printf("end enter number of rows of triangle_matrix\n");
}

