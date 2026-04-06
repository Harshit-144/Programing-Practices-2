/* 1. Write a program to enter N elements and search a value from the list using linear search. */
#include <stdio.h>

int main() {
    int a[100], n, val, found = 0;
    printf("Enter N: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to search: "); scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            printf("Found at index %d", i);
            found = 1; break;
        }
    }
    if (!found) printf("Not found");
    return 0;
}