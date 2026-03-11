// 7. Add two matrices using array of pointers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int *A[r], *B[r], *C[r];

    for(i = 0; i < r; i++) {
        A[i] = (int*)malloc(c * sizeof(int));
        B[i] = (int*)malloc(c * sizeof(int));
        C[i] = (int*)malloc(c * sizeof(int));
    }

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < r; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }

    return 0;
}
