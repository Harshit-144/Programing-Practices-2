// Enter N elements and find how many are positive, negative, even and odd.
// program-4
#include<stdio.h>

int main(){
    int n;
    int positive = 0, negative = 0;
    int even = 0, odd = 0;
    printf("Enter no of array elements here : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements here : ");
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }

        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("\nResults:\n");
    printf("Positive numbers : %d\n", positive);
    printf("Negative numbers : %d\n", negative);
    printf("Even numbers     : %d\n", even);
    printf("Odd numbers      : %d\n", odd);

    printf("Total numbers    : %d\n", n);

    return 0;
}
