/* 5. Write a program to enter N elements and arrange the list in ascending order using selection sort. */
#include <stdio.h>

int main() {
    int a[10], n, min, temp;
    printf("Enter N: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min]) min = j;
        temp = a[i]; a[i] = a[min]; a[min] = temp;
    }
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}