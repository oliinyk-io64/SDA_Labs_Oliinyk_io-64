#include <stdio.h>

int main() {

    //СТВОРЕННЯ ТА ВИВЕДЕННЯ МАТРИЦІ
    int m = 10;
    int n = 10;
    int array[10][10] = {
        {  4,  12,  -3,   8,  15,  22,   0,   7,  19,  11},
        {  5,  18,   4,   3,   9,   1,   8,  18,   2,  10},
        {  2,   8,  -5,   7,   4,   5,   6,   9,   0,  12},
        {  0,  -1,   3,  14,   8,   4,   2,   9,   3,  12},
        {  5,   6,   7,   8,  -2,   1,   3,   1,   4,  15},
        {  4,   3,   2,   1,   0,  31,   8,   2,   5,  15},
        {  9,   2,   1,   4,   5,   6,   6,   3,   6,  15},
        {  1,   1,   2,   2,   3,   3,   4, -10,   7,  18},
        {  0,   5,   2,   9,   1,   8,   4,   6,  25,  20},
        {  2,   2,   4,   5,   6,   7,   8,   9,   9,  -8}
    };
    printf("Початкова матриця:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }

    // ШЕЙКЕРНЕ СОРТУВАННЯ

    int left2 = 0;
    int right2 = n - 1;
    int swapped2 = 1;

    while (swapped2 && left2 < right2) {
        swapped2 = 0;

        for (int i = left2; i < right2; i++) {
            if (array[i][i] < array[i + 1][i + 1]) {
                int temp = array[i][i];
                array[i][i] = array[i + 1][i + 1];
                array[i + 1][i + 1] = temp;
                swapped2 = 1;
            }
        }
        right2--;

        if (!swapped2) break;

        swapped2 = 0;

        for (int i = right2; i > left2; i--) {
            if (array[i][i] > array[i - 1][i - 1]) {
                int temp = array[i][i];
                array[i][i] = array[i - 1][i - 1];
                array[i - 1][i - 1] = temp;
                swapped2 = 1;
            }
        }
        left2++;
    }

    printf("\nМатриця після сортування головної діагоналі:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}