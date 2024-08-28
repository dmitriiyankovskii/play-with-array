#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#include "triangle_input_param.h"
#include "enter_matrix_number_cell_in_row.h"
#include "enter_triangle_matrix.h"
#include "print_triangle_matrix.h"

int main(void) {
    int rows = 0, cols = 0;
    //FILE *myfile;
    //myfile = fopen("", "r");

    triangle_input_param(&rows, &cols);

    int number_of_cell = (1 + rows) * rows / 2;

    int * triangle_matrix           = (int*) calloc(number_of_cell, sizeof(int));
    int * matrix_number_cell_in_row = (int*) calloc(rows + 1, sizeof(int)); 

    if(triangle_matrix == NULL) {
        printf("ERROR\n");
    }

    if(matrix_number_cell_in_row == NULL) {
        printf("ERROR\n");
    }

    enter_matrix_number_cell_in_row(matrix_number_cell_in_row, rows);
    
    enter_triangle_matrix(triangle_matrix, matrix_number_cell_in_row, rows);

    print_triangle_matrix(triangle_matrix, matrix_number_cell_in_row, rows);

    free(triangle_matrix);
    free(matrix_number_cell_in_row);
}