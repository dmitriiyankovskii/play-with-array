#include <stdio.h>

#include "enter_triangle_matrix.h"

void enter_triangle_matrix(FILE* myfile, int * triangle_matrix, int * matrix_number_cell_in_row, int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < matrix_number_cell_in_row[i]; j++) {
            fscanf(myfile, "%d", triangle_matrix + ((1 + i) * i / 2) + j);
        }
    }
}