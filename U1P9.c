// 9. Write a program to add two matrices.
#include<stdio.h>

int main(){
    int n,m;
    printf("Enter rows for Matrix here : ");
    scanf("%d",&n);
    printf("Enter column for Matrix here : ");
    scanf("%d",&m);
    int arrA[n][m], arrB[n][m], arrSum[n][m];

    printf("\nEnter elements for first array [%d][%d] here : \n",n,m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("Enter element for [%d][%d] = ",i + 1,j + 1);
            scanf("%d",&arrA[i][j]);
        }
    }

    printf("\nEnter elements for second array [%d][%d] here : \n",n,m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("Enter element for [%d][%d] = ",i + 1,j + 1);
            scanf("%d",&arrB[i][j]);
        }
    }

    // adding
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            arrSum[i][j] = arrA[i][j] + arrB[i][j];
        }
    }

    printf("\nSum of both matrix are : \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",arrSum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
