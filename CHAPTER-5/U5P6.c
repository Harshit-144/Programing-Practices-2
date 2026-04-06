/* 6. Write a program to enter N elements and arrange the list in ascending order using shell sort. */
#include <stdio.h>

int main() {
    int a[100], n, i, j, gap, temp;
    printf("Enter N: "); 
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = a[i];
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap) {
                a[j] = a[j - gap];
            }
            a[j] = temp;
        }
    }

    printf("Sorted using Shell Sort: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}