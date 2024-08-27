#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>

#include "input.h"
#include "addition.h"
#include "print.h"
#include "input_param.h"

int main(void) {
    int rows = 0, cols = 0;
    input_param(&rows, &cols);
    
    int* first_matrix = (int*) calloc(cols * rows, sizeof(int));
    int* second_matrix = (int*) calloc(cols * rows, sizeof(int));
    int* result_matrix = (int*) calloc(cols * rows, sizeof(int));

    FILE *myfile;
    myfile = fopen("matrixes.txt", "r");
    
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