#include "transformation.h"
#include <stdio.h>

transformation string_to_long(const char *str) {
    transformation result;
    result.result = 0;
    result.error[0] = '\0';

    if (str == NULL || str[0] == '\0') {
        snprintf(result.error, sizeof(result.error), "Invalid input string");
        return result;
    }

    int i = 0;
    int is_negative = 0;

    if (str[0] == '-') {
        is_negative = 1;
        i++;
    }

    if (str[i] == '\0') {
        snprintf(result.error, sizeof(result.error), "Invalid input string");
        return result;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            snprintf(result.error, sizeof(result.error), "Invalid input string");
            return result;
        }
        result.result = result.result * 10 + (str[i] - '0');
    }

    if (is_negative) {
        result.result = -result.result;
    }

    return result;
}