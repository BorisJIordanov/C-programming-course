#include "mystrings.h"

int my_strlen(const char *str) {
    int length = 0;
    while (*str++) length++;
    return length;
}

void my_strcat(char *dest, const char *src) {
    while (*dest) dest++;
    while ((*dest++ = *src++));
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}