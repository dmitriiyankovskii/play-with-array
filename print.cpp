#include <stdio.h>

#include "print.h"

void print(const int (*arr), int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%3d ", *(arr + cols*i + j));
        }
        printf("\n");
    }
    printf("\n");
}