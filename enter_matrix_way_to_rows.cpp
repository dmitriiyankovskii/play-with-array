#include "enter_matrix_way_to_rows.h"

void enter_matrix_way_to_rows(int *matrix_length_rows, int *matrix_way_to_rows, int rows) {
    for(int i = 0; i < rows; i++) {
        int count = 0;
        for(int j = 0; j < i; j++) {
            count += matrix_length_rows[j];
        }
        matrix_way_to_rows[i] = count;
    }
}