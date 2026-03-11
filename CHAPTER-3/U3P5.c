// 5. Enter N elements and find out sum of prime numbers using dynamic array.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, flag;
    int *arr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        flag = 1;

        if(arr[i] <= 1)
            flag = 0;

        for(j = 2; j <= arr[i]/2; j++) {
            if(arr[i] % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    free(arr);

    return 0;
}
