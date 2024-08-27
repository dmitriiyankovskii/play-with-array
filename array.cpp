#include <stdio.h>
const int ROWS = 5;
const int COLS = 4;

void print(int *);
void print2(int [][COLS], int);
void print3(int [][COLS]);

int main(void) {
    //int arr1[5] = {1, 2, 3, 4, 5};
    int arr[ROWS][COLS] = {
        {2, 45, 23, 53},
        {33, 78, 12, 0},
        {55, 67, 22, 5},
        {345, 234, 432, 659},
        {213, 324, 9054, 332}
    };
    
    //print(arr1);
    //print2(arr, ROWS);
    print3(arr);
}

void print(int *array) {
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, array[i]);
    }
}

void print2(int data[][COLS], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("arr[%d][%d] = %d\n", i, j, data[i][j]);
        }
        printf("\n");
    }
}

void print3(int data[][COLS]) {
    printf("%d", *(*(data + 3) + 3));
}