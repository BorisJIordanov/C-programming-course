#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }
    char result[101] = {0}; // 50 + 50 + 1 for null terminator
    strncpy(result, argv[1], 50);
    my_strcat(result, argv[2]);
    printf("%s\n", result);
    return 0;
}