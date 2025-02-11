#include <stdio.h>

#define DEBUG_VAR(var) printf("File: %s, Line: %d, Variable: %s, Value: %d\n", __FILE__, __LINE__, #var, var)

int main() {
    int x = 42;
    DEBUG_VAR(x);
    return 0;
}

// Output: File: info-debug.c, Line: 8, Variable: x, Value: 42