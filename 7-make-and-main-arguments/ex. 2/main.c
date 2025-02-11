#include <stdio.h>
#include "mystrings.h"

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