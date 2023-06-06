#include<stdio.h>

// void partition(int *A,int low,int high){
    
// }

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int low = 0;
    int high = n-1;
    int pivot = A[low];
    int i=low +1;
    int j = high;
    int temp;
    do{
        for(;A[i]<=pivot;i++);
        for(;A[j]>pivot;j--);
        if(i<j){
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }while(i<j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    return 0;
}