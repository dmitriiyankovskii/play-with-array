#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>

void addition(const int (*first_matrix), const int (*second_matrix), int (*result_matrix), int row1, int cols);
void print(const int (*arr), int rows, int cols);
void input(int (*first_matrix), int rows, int cols);
void print_p(const int (*result_matrix), int cols, int rows);

int main(void) {
    
    int rows = 0, cols = 0;

    printf("Enter number of rows: \n");
    scanf("%d", &rows);

    printf("Enter number of cols: \n");
    scanf("%d", &cols);

    int* first_matrix = (int*) calloc(cols * rows, sizeof(int));
    int* second_matrix = (int*) calloc(cols * rows, sizeof(int));
    int* result_matrix = (int*) calloc(cols * rows, sizeof(int));

    input(first_matrix, rows, cols);
    printf("Enter second matrix: \n");
    input(second_matrix, rows, cols);
    
    addition(first_matrix, second_matrix, result_matrix, rows, cols);
    
    print(first_matrix, rows, cols);
    printf("\n");
    print(second_matrix, rows, cols);
    printf("\n");
    print(result_matrix, rows, cols);
    free(first_matrix);
}

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

void print(const int (*arr), int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%3d ", *(arr + cols*i + j));
        }
        printf("\n");
    }
}

void input(int (*first_matrix), int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", (first_matrix + i*cols + j));
        }
    }
}