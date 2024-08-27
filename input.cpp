#include <stdio.h>
#include "input.h"

void input(int (*first_matrix), int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", (first_matrix + i*cols + j));
        }
    }
}