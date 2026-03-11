// 3. Find out maximum and minimum number using pointer to function.
#include <stdio.h>

void findMaxMin(int *a, int *b, int *max, int *min) {
    if (*a > *b) {
        *max = *a;
        *min = *b;
    } else {
        *max = *b;
        *min = *a;
    }
}

int main() {
    int x, y, max, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    findMaxMin(&x, &y, &max, &min);

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
