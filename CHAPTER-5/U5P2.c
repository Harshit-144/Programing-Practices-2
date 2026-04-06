/* 2. Write a program to enter N elements and search a value from the list using binary search (without recursion). */
#include <stdio.h>

int main() {
    int a[100], n, val, low, high, mid;
    printf("Enter N (Sorted): "); scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Search for: "); scanf("%d", &val);

    low = 0; high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == val) { printf("Found at %d", mid); return 0; }
        if (a[mid] < val) low = mid + 1;
        else high = mid - 1;
    }
    printf("Not found");
    return 0;
}