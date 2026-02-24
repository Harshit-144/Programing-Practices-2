//  Enter N elements and find maximum and minimum value.
// program-3
#include<stdio.h>

int main(){
    int arr[100],n;
    printf("Enter array no of elements(1-100) : ");
    scanf("%d",&n);
    if (n <= 0 || n > 100){
        printf("Invalid.");
        return 1;
    }

    printf("Enter %d elements:\n",n);
    for(int i = 0; i < n; i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("\nResults:\n");
    printf("Maximum value = %d\n",max);
    printf("Minimum value = %d\n",min);

    return 0;
}
