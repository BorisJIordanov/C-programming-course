#include <stdio.h>

size_t my_strlen(const char *str) {
    const char *s = str;
    while (*s) {
        s++;
    }
    return s - str;
}

int main() {
    const char *testStr = "Hello, world!";
    printf("Length of '%s' is %zu\n", testStr, my_strlen(testStr));
    return 0;
}
