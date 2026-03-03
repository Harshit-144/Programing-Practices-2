// 8. Demonstrate difference between structure and union.
#include <stdio.h>
#include <string.h>

struct MyStruct {
    int i;      // 4 bytes
    float f;    // 4 bytes
    char c;     // 1 byte
};

union MyUnion {
    int i;
    float f;
    char c;
};

int main() {
    struct MyStruct s = {10, 22.5, 'A'};
    union MyUnion u;

    // 1. Show Size Difference
    printf("Size of Structure: %zu bytes\n", sizeof(s));
    printf("Size of Union: %zu bytes\n\n", sizeof(u));

    // 2. Show Data Access
    printf("--- Structure Data ---\n");
    printf("i: %d, f: %.1f, c: %c\n", s.i, s.f, s.c);

    printf("\n--- Union Data (One by One) ---\n");
    u.i = 10;
    printf("i: %d\n", u.i);

    u.f = 22.5; // This overwrites 'i'
    printf("f: %.1f\n", u.f);

    u.c = 'Z';  // This overwrites 'f'
    printf("c: %c\n", u.c);

    return 0;
}
