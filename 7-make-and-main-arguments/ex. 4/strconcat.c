#include <stdio.h>
#include <string.h>
#include "mystrings.h"

#define MAX_LENGTH 50

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }
    if (my_strlen(argv[1]) > MAX_LENGTH || my_strlen(argv[2]) > MAX_LENGTH) {
        printf("Error: Each string must be at most %d characters long.\n", MAX_LENGTH);
        return 1;
    }
    char result[2 * MAX_LENGTH + 1] = {0}; // 50 + 50 + 1 for null terminator
    strncpy(result, argv[1], MAX_LENGTH);
    my_strcat(result, argv[2]);
    printf("%s\n", result);
    return 0;
}