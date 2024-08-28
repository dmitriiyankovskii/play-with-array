#include <stdio.h>

#include "enter_ragged_matrix.h"

void enter_ragged_matrix(int *matrix_length_rows, int *matrix, int *matrix_way_to_rows, int rows) {
    printf("Enter a matrix: \n");
    for(int i = 0; i < rows; i++) {
        printf("Enter %d row: \n", i);
        for(int j = 0; j < matrix_length_rows[i]; j++) {
            scanf("%d", matrix + matrix_way_to_rows[i] + j);
        }
    }
}