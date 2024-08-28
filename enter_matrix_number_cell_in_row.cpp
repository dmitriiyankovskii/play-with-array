#include "enter_matrix_number_cell_in_row.h"

void enter_matrix_number_cell_in_row(int *matrix_number_cell_in_row, int rows) {
    for(int i = 0; i < rows; i++) {
        *(matrix_number_cell_in_row + i) = i + 1;     
    }
}