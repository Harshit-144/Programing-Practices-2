/* 3. Write a program to enter N elements and search a value from the list using binary search. (with recursion) */
#include <stdio.h>

int binarySearch(int a[], int l, int h, int v) {
    if (l > h) return -1;
    int m = (l + h) / 2;
    if (a[m] == v) return m;
    if (a[m] < v) return binarySearch(a, m + 1, h, v);
    return binarySearch(a, l, m - 1, v);
}

int main() {
    int a[10], n, v;
    printf("Enter N (Sorted): "); scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Search for: "); scanf("%d", &v);
    int res = binarySearch(a, 0, n - 1, v);
    if (res == -1) printf("Not found");
    else printf("Found at index %d", res);
    return 0;
}