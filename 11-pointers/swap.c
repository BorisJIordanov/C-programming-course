#include <stdio.h>

void swap(void *a, void *b) {
    int temp;
    int *pa = (int *)a;
    int *pb = (int *)b;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}