// 7. Merge two array.
#include<stdio.h>

int main(){
    int e1,e2;
    int arr[200];

    printf("Enter size of first array : ");
    scanf("%d",&e1);
    printf("Enter array %d  elements here : \n",e1);
    for (int i=0;i<e1;i++){
        printf("Enter %dth element here : ",i + 1);
        scanf("%d",&arr[i]);
    }

    printf("Enter size of second array : ");
    scanf("%d",&e2);
    printf("Enter array %d elements here : \n",e2);
    for (int i=0;i<e2;i++){
        printf("Enter %dth element here : ",i + 1);
        scanf("%d",&arr[e1 + i]);
    }

    printf("\nMerged Array : \n");
    for (int i=0;i < e1 + e2;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
