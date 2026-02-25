// program-1
#include<stdio.h>

int main(){
    int arr[5];
    printf("Enter array elements here : ");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are as folows : ");
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
