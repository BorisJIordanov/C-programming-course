#include <stdio.h>

int greatest_common_divider(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int least_common_divider(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Least Common Multiple of %d and %d is %d\n", a, b, lcm(a, b));
    return 0;
}