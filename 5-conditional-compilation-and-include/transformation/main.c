#include <stdio.h>
#include "transformation.h"

int main() {
    const char *valid_input = "-123";
    const char *invalid_input = "12ab23";

    transformation result1 = string_to_long(valid_input);
    transformation result2 = string_to_long(invalid_input);

    printf("Input: %s\nResult: %ld\nError: %s\n\n", valid_input, result1.result, result1.error);
    printf("Input: %s\nResult: %ld\nError: %s\n", invalid_input, result2.result, result2.error);

    return 0;
}