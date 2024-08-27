#include <stdio.h>

const int COLS = 10;

void addition(int (*arr1)[COLS], int ,  int (*arr2)[COLS], int (*arr3)[COLS]);
void print(int (*arr)[COLS], int);
void print_p(int (*arr)[COLS], int);
void print_p(int (*arr)[COLS], int, int);

int main(void) {
    

    int matrix1[2][COLS] = { {1, 4, 5, 3, 7, 4, 2, 5, 6, 6},
                          {5, 2, 7, 3, 5, 9, 6, 3, 5, 3} };
    int matrix2[2][COLS] = { {8, 5, 3, 7, 3, 6, 1, 3, 6, 3},
                          {4, 5, 2, 6, 4, 3, 6, 7, 5, 6} };
    int arr3[2][COLS];

    addition(matrix1, 2, matrix2, arr3);
    print(matrix1, 2);
    print(matrix2, 2);
    print(arr3, 2);
    print_p(matrix1, 1, 5);
}
void addition(const int (*first_matrix)[COLS], int row1, const int (*second_matrix)[COLS], int (*result_matrix)[COLS]){
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < COLS; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    
}

void print(const int (*arr)[COLS], int row1) {
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

void print_p(const int (*arr)[COLS], int i, int j){
    int x = *(*arr + i*COLS + j);
    printf("%d", x);
}

