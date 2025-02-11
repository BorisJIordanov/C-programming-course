#include <stdio.h>

#define SWAP(a, b, TYPE) do { \
    TYPE temp = a; \
    a = b; \
    b = temp; \
} while (0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE) do { \
    for (size_t i = 0; i < SIZE - 1; ++i) { \
        for (size_t j = 0; j < SIZE - i - 1; ++j) { \
            if (ARRAY[j] COMPARE ARRAY[j + 1]) { \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            } \
        } \
    } \
} while (0)

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    size_t size = sizeof(array) / sizeof(array[0]);

    SORT(array, size, int, >);

    printf("Sorted array in ascending order: ");
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, <);

    printf("Sorted array in descending order: ");
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}