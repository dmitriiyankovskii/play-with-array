#include <stdio.h>

#include "print_ragged_matrix.h"

void print_ragged_matrix(int *matrix_length_rows, int *matrix, int *matrix_way_to_rows, int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < matrix_length_rows[i]; j++) {
            printf("%3d", *(matrix + matrix_way_to_rows[i] + j));
        }
        printf("\n");
    }
}