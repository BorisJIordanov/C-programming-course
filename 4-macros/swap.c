#include <stdio.h>

#define SWAP(A, B, TYPE) \
    do {                \
        TYPE temp = A;  \
        A = B;          \
        B = temp;       \
    } while (0)

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    SWAP(x, y, int);
    printf("After swap: x = %d, y = %d\n", x, y);

    double a = 1.23, b = 4.56;
    printf("Before swap: a = %.2f, b = %.2f\n", a, b);
    SWAP(a, b, double);
    printf("After swap: a = %.2f, b = %.2f\n", a, b);

    return 0;
}