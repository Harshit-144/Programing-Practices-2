// 6. Enter N elements and find out sum of odd and even numbers using dynamic array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int sumEven = 0, sumOdd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            sumEven = sumEven + arr[i];
        else
            sumOdd = sumOdd + arr[i];
    }

    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d\n", sumOdd);

    free(arr);

    return 0;
}
