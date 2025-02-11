#include "mystrings.h"
#include <string.h>

int strlength(const char *str) {
    return strlen(str);
}

void strconcat(char *dest, const char *src) {
    strcat(dest, src);
}

int strcompare(const char *str1, const char *str2) {
    int result = strcmp(str1, str2);
    if (result < 0) {
        return -1;
    } else if (result > 0) {
        return 1;
    } else {
        return 0;
    }
}