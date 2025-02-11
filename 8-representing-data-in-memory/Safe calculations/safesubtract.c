#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error("Usage: safesubtract <num1> <num2>");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    SafeResult res = safesubtract(a, b);

    if (res.errorflag) {
        print_error("Overflow or underflow occurred during subtraction.");
        return 1;
    }

    printf("Result: %d\n", res.result);
    return 0;
}