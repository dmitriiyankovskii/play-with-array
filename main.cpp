#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>

#include "input.h"
#include "addition.h"
#include "print.h"

int main(void) {
    
    int rows = 0, cols = 0;

    printf("Enter number of rows: \n");
    scanf("%d", &rows);

    printf("Enter number of cols: \n");
    scanf("%d", &cols);

    int* first_matrix = (int*) calloc(cols * rows, sizeof(int));
    int* second_matrix = (int*) calloc(cols * rows, sizeof(int));
    int* result_matrix = (int*) calloc(cols * rows, sizeof(int));

    printf("Enter first matrix: \n");
    input(first_matrix, rows, cols);

    printf("Enter second matrix: \n");
    input(second_matrix, rows, cols);
    
    addition(first_matrix, second_matrix, result_matrix, rows, cols);
    
    print(first_matrix, rows, cols);
    print(second_matrix, rows, cols);
    print(result_matrix, rows, cols);

    free(first_matrix);
}