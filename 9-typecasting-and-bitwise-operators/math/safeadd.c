#include <stdio.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        print_error_message();
        return 1;
    }

    SafeResult result = safeadd(a.value, b.value);
    if (result.errorflag) {
        print_error_message();
        return 1;
    }

    printf("Result: %d\n", result.value);
    return 0;
}
