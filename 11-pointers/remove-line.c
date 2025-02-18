#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        char *newline = strchr(str, '\n');
        if (newline != NULL) {
            *newline = '\0';
        }
        printf("String after removing newline: %s\n", str);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}