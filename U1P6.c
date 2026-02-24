// 6. Enter N elements and arrange them in reverse order.
#include<stdio.h>

int main(){
    int n;
    printf("Enter no. of array elements here : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d Array elements here : \n",n);
    for (int i=0; i<n; i++){
        printf("Enter %dth element here:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nThe following array is in Reverse order : ");
    for (int i = n - 1; i >= 0; i--){
        printf("%d ",arr[i]);
    }

    return 0;
}
