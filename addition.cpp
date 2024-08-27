#include <assert.h>

#include "addition.h"

void addition(const int (*first_matrix), const int (*second_matrix), int (*result_matrix), int row1, int cols){
    assert(first_matrix);
    assert(second_matrix);
    assert(result_matrix);

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < cols; j++) {
            *(result_matrix + i*cols + j) = *(first_matrix + i*cols + j) + *(second_matrix + i*cols + j);
        }
    }
}