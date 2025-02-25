#include <stdio.h>

#define COLS 4

void printTable(int (*array)[COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", *(*(array + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int table[][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = sizeof(table) / sizeof(table[0]);

    printTable(table, rows);

    return 0;
}