// Enter N elements and find total and average of them.
//program-2
#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    printf("Enter 5 array elements: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    float avg = sum / 5;

    // Output
    printf("\nTotal = %d\n", sum);
    printf("Average = %f\n", avg);

    return 0;
}
