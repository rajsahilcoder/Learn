#include<stdio.h>

int partition(long *A,int low,int high)
{
    int i=low+1;
    int j=high;
    long temp;
    long pivot = A[low];
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }while(i<j);
    long tmp = A[low];
    A[low] = A[j];
    A[j] = tmp;
    return j;
    
}
void quickSort(long *A,int low,int high)
{
    int partitionIndex;
    if(low<high)
    {
        partitionIndex = partition(A,low,high);
        quickSort(A,low,partitionIndex-1);
        quickSort(A,partitionIndex+1,high);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    long A[n];
    long dif[n-1];
    for(int i =0;i<n;i++)
    {
        scanf("%ld",&A[i]);
    }
    quickSort(A,0,n-1);
    long min=9999999;
    for(int i =0;i<n-1;i++)
    {
        dif[i] = A[i+1]-A[i];
        if(min>dif[i]){
            min = dif[i];
        }
    }
    
    for(int i =0;i<n-1;i++)
    {
        if(dif[i] ==min){
            printf("%ld %ld ",A[i],A[i+1]);
        }
    }
    
    return 0;
}