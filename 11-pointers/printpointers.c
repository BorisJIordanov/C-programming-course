#include <stdio.h>

int main() {
    double var1, var2;
    double *ptr1, *ptr2;


    printf("Enter second value: ");
    scanf("%lf", &var1);
    printf("Enter second value: ");
    scanf("%lf", &var2);

    ptr1 = &var1;
    ptr2 = &var2;

    printf("Adress of ptr1: %p, Value of var1: %lf\n", (void*)ptr1, *ptr1);
    printf("Adress of ptr2: %p, Value of var2: %lf\n", (void*)ptr2, *ptr2);

    return 0;
}