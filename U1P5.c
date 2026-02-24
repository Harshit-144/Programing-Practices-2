// 5. Copy the elements of one array into another.
#include<stdio.h>

int main(){
    int n;
    printf("Enter No. of Array Elements here : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Array elements here : \n",n);
    for (int i=0;i<n;i++){
        printf("Enter %dth element here:",i+1);
        scanf("%d",&arr[i]);
    }
    int arrcpy[n];
    for (int i=0;i<n;i++){
        arrcpy[i] = arr[i];
    }
    printf("\nOriginal array : ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nCopy array : ");
    for (int i=0;i<n;i++){
        printf("%d ",arrcpy[i]);
    }
    return 0;
}
