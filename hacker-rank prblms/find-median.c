#include<stdio.h>

int partition(int *A,int low,int high){
    int i=low+1;
    int j=high;
    int pivot = A[low];
    int temp;
    do{
        for(;A[i]<=pivot;i++);
        for(;A[j]>pivot;j--);
        if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i<j);
    temp = A[low];
    A[low]=A[j];
    A[j] =temp;
    return j;
}

int quickSort(int *A,int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex = partition(A,low,high);
        quickSort(A,low,partitionIndex-1);
        quickSort(A,partitionIndex+1,high);
    
    }
    return 0;
}

int main()
{   
    
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    quickSort(A,0,n-1);
    int median = n/2 ;
    // for(int i=0;i<n;i++){
    //     printf("%d ",A[i]);
    // }
    printf("%d",A[median]);
    return 0;
}