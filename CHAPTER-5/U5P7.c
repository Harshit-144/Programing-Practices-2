/* 7. Write a program to enter N elements and arrange the list in ascending order using quick sort. */
#include <stdio.h>

void quickSort(int a[], int first, int last) {
    int i, j, pivot, temp;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;

        while (i < j) {
            while (a[i] <= a[pivot] && i < last) i++;
            while (a[j] > a[pivot]) j--;
            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quickSort(a, first, j - 1);
        quickSort(a, j + 1, last);
    }
}

int main() {
    int a[100], n, i;
    printf("Enter N: "); 
    scanf("%d", &n); [cite: 14]
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    quickSort(a, 0, n - 1);

    printf("Sorted using Quick Sort: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}