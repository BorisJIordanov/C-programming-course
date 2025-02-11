#include <stdio.h>
#include <limits.h>
#include "safeint.h"

SafeResult safeadd(int a, int b) {
    SafeResult result = {0, 0};
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1; // Overflow or underflow
    } else {
        result.value = a + b;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result = {0, 0};
    if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b)) {
        result.errorflag = 1; // Overflow or underflow
    } else {
        result.value = a - b;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result = {0, 0};
    if (a != 0 && (b > INT_MAX / a || b < INT_MIN / a)) {
        result.errorflag = 1; // Overflow or underflow
    } else {
        result.value = a * b;
    }
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result = {0, 0};
    if (b == 0 || (a == INT_MIN && b == -1)) {
        result.errorflag = 1; // Division by zero or overflow
    } else {
        result.value = a / b;
    }
    return result;
}

SafeResult safestrtoint(const char* str) {
    SafeResult result = {0, 0};
    char *end;
    long temp = strtol(str, &end, 10);
    if (*end != '\0' || temp > INT_MAX || temp < INT_MIN) {
        result.errorflag = 1; // Conversion error or out of range
    } else {
        result.value = (int)temp;
    }
    return result;
}
