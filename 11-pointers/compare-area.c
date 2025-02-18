#include <stdio.h>

int compareasc(const void *a, const void *b) {
    int int_a = *((const int *)a);
    int int_b = *((const int *)b);

    if (int_a > int_b) {
        return 1;
    } else if (int_a < int_b) {
        return -1;
    } else {
        return 0;
    }
}

int comparedesc(const void *a, const void *b) {
    int int_a = *((const int *)a);
    int int_b = *((const int *)b);

    if (int_a < int_b) {
        return 1;
    } else if (int_a > int_b) {
        return -1;
    } else {
        return 0;
    }
}

void demonstrate() {
    int x = 5;
    int y = 10;

    printf("Comparing %d and %d in ascending order: %d\n", x, y, compareasc(&x, &y));
    printf("Comparing %d and %d in descending order: %d\n", x, y, comparedesc(&x, &y));

    x = 10;
    y = 5;

    printf("Comparing %d and %d in ascending order: %d\n", x, y, compareasc(&x, &y));
    printf("Comparing %d and %d in descending order: %d\n", x, y, comparedesc(&x, &y));

    x = 5;
    y = 5;

    printf("Comparing %d and %d in ascending order: %d\n", x, y, compareasc(&x, &y));
    printf("Comparing %d and %d in descending order: %d\n", x, y, comparedesc(&x, &y));
}

int main() {
    demonstrate();
    return 0;
}
