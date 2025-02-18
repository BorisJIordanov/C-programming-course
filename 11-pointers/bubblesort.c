#include <stdio.h>

void bubblesort(void *array, size_t n, int (*compare)(const void *, const void *), void (*swapelements)(void *, void *)) {
    char *arr = (char *)array;
    size_t size = sizeof(void *);
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (compare(arr + j * size, arr + (j + 1) * size) > 0) {
                swapelements(arr + j * size, arr + (j + 1) * size);
            }
        }
    }
}

int compare_ints(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void swap_ints(void *a, void *b) {
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n, compare_ints, swap_ints);

    printf("Sorted array: \n");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}