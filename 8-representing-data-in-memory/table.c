#include <stdio.h>
#include <limits.h>

#define PRINT_TYPE_INFO(type, format) \
    printf("| %-10s | %-8s | %-6lu | %-20d | %-20d | %-8s | %-20u |\n", \
           #type, format, sizeof(type), INT_MAX, INT_MIN, "u" #format, UINT_MAX)

int main() {
    printf("| %-10s | %-8s | %-6s | %-20s | %-20s | %-8s | %-20s |\n", 
           "Type", "Format", "Bytes", "Signed Max", "Signed Min", "U-Format", "Unsigned Max");
    printf("|------------|----------|--------|----------------------|----------------------|----------|----------------------|\n");

    PRINT_TYPE_INFO(int, "%d");
    PRINT_TYPE_INFO(short, "%hd");
    PRINT_TYPE_INFO(long, "%ld");
    PRINT_TYPE_INFO(long long, "%lld");
    PRINT_TYPE_INFO(char, "%c");

    return 0;
}