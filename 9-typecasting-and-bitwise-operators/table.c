#include <stdio.h>
#include <limits.h>

void print_type_info(const char *type, const char *format, size_t size, long long signed_max, long long signed_min, const char *u_format, unsigned long long unsigned_max) {
    printf("| %-10s | %-8s | %-6zu | %-20lld | %-20lld | %-8s | %-20llu |\n", 
           type, format, size, signed_max, signed_min, u_format, unsigned_max);
}

int main() {
    printf("| %-10s | %-8s | %-6s | %-20s | %-20s | %-8s | %-20s |\n", 
           "Type", "Format", "Bytes", "Signed Max", "Signed Min", "U-Format", "Unsigned Max");
    printf("|------------|----------|--------|----------------------|----------------------|----------|----------------------|\n");

    print_type_info("char", "%c", sizeof(char), SCHAR_MAX, SCHAR_MIN, "%hhu", UCHAR_MAX);
    print_type_info("short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
    print_type_info("int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
    print_type_info("long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    print_type_info("long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);

    return 0;
}