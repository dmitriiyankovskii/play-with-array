#include <stdio.h>

#include "enter_cols_ragged_matrix.h"

void enter_cols_ragged_matrix(int *matrix_length_rows, int *number_of_cell, int rows) {
    printf("Enter number of cols in each %d rows: \n", rows);
    for(int i = 0; i < rows; i++) {
        int cols = 0;
        scanf("%d", &cols);
        *(matrix_length_rows + i) = cols;
        *number_of_cell += cols;
    }
}