#include <stdio.h>

#define SUM_TO_THE_POW(A, B) ((A + B) * (A + B))

int main() {
    int a = 3;
    int b = 4;
    int result = SUM_TO_THE_POW(a, b);
    printf("The result of (%d + %d) ^ 2 is: %d\n", a, b, result);
    return 0;
}