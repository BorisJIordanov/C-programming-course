#include <stdio.h>

void bubblesort(int arr[], int n, int (*compare)(int, int));
int compareasc(int a, int b);
int comparedesc(int a, int b);
void printArray(int arr[], int size);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    // Sort array in ascending order
    bubblesort(arr, n, compareasc);
    printf("\nSorted array in ascending order: \n");
    printArray(arr, n);

    // Sort array in descending order
    bubblesort(arr, n, comparedesc);
    printf("\nSorted array in descending order: \n");
    printArray(arr, n);

    return 0;
}

void bubblesort(int arr[], int n, int (*compare)(int, int)) {
    if (n == 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (compare(arr[i], arr[i + 1])) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    bubblesort(arr, n - 1, compare);
}

int compareasc(int a, int b) {
    return a > b;
}

int comparedesc(int a, int b) {
    return a < b;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}