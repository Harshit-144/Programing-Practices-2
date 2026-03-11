// 4. Enter N elements and find out sum and average of them using dynamic array.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float sum = 0, avg;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);

    return 0;
}
