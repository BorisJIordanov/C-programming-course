#include <stdio.h>
#include <string.h>

int strlength(const char *str) {
    return strlen(str);
}

void strconcat(char *dest, const char *src) {
    strcat(dest, src);
}

int strcompare(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

void show_help() {
    printf("Help Menu:\n");
    printf("1. strlength - Finds the length of a string.\n");
    printf("2. strconcat - Concatenates two strings.\n");
    printf("3. strcompare - Compares two strings.\n");
}

int main() {
    show_help();
    return 0;
}