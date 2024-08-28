#include <stdio.h>
#include <malloc.h>

#include "enter_rows_ragged_matrix.h"
#include "enter_cols_ragged_matrix.h"
#include "enter_matrix_way_to_rows.h"
#include "enter_ragged_matrix.h"
#include "print_ragged_matrix.h"

int main(void) {
    int rows = 0;
    int number_of_cell = 0;

    enter_rows_ragged_matrix(&rows);

    int* matrix_length_rows = (int*) calloc(rows, sizeof(int));

    if(matrix_length_rows == NULL) {
        printf("ERROR\n");
    }

    enter_cols_ragged_matrix(matrix_length_rows, &number_of_cell, rows);

    int* matrix             = (int*) calloc(number_of_cell, sizeof(int));
    int* matrix_way_to_rows = (int*) calloc(rows, sizeof(int));

    if(matrix == NULL) {
        printf("ERROR\n");
    }

    if(matrix_way_to_rows == NULL) {
        printf("ERROR\n");
    }

    enter_matrix_way_to_rows(matrix_length_rows, matrix_way_to_rows, rows);

    enter_ragged_matrix(matrix_length_rows, matrix, matrix_way_to_rows, rows);

    print_ragged_matrix(matrix_length_rows, matrix, matrix_way_to_rows, rows);

    free(matrix_length_rows);
    free(matrix);
    free(matrix_way_to_rows);
}