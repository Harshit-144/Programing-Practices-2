/* 4. Write a program to enter N elements and arrange the list in ascending order using bubble sort. */
#include <stdio.h>

int main() {
    int a[10], n, temp;
    printf("Enter N: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
            }
        }
    }
    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}