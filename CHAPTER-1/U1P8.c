// 8. Write a program to print 3 * 3 matrix.
#include<stdio.h>

int main(){
    int n,m;
    printf("Enter rows of the matrix here : ");
    scanf("%d",&n);
    printf("Enter column of the matrix here : ");
    scanf("%d",&m);
    int arr[n][m];

    printf("Enter Elements for [%d][%d] array here : \n",n,m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("Enter element for [%d][%d] = ",i + 1,j + 1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe matrix you've entered is : \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
