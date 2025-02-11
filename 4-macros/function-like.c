#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10;
    int y = 20;
    int max = MAX(x, y);

    printf("The bigger number is: %d\n", max); 

    float a = 5.5;
    float b = 3.2;
    float maxFloat = MAX(a, b);

    printf("The bigger number is %.2f\n", maxFloat); 

    return 0;
}
