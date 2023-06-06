#include<stdio.h>
#include<stdlib.h>
int isSorted(int *arr,int n)
{
    // int min =arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
        
    }
    return 1;
}
int swap(int *arr,int n,int first,int last)
{
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i] = arr[i];
    
    }
    int temp = brr[first];
    brr[first] = brr[last];
    brr[last] = temp;
    if(isSorted(brr,n) ==1)
    {
        printf("yes\nswap %d %d",first+1,last+1);
        return 1;
    }
    return 0;
    
}
int reverse(int *arr,int n,int first,int last)
{
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i] = arr[i];
    
    }
    for(int i=first,j=last;i<=last&& j>=first;i++,j--)
    {
        brr[i] = arr[j];
    }
    if(isSorted(brr,n) ==1)
    {
        printf("yes\nreverse %d %d",first+1,last+1);
        return 1;
    }
    return 0;
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {

        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}
void quickSort(int *A, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
    
    partitionIndex = partition(A, low, high);
    quickSort(A, low, partitionIndex - 1);
    quickSort(A, partitionIndex + 1, high);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        brr[i] = arr[i];
    }
    if(isSorted(arr,n)==1)
    {
        printf("yes");
    }
    else{
        quickSort(brr,0,n-1);
        
        int first;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=brr[i])
            {
                first = i;
                break;
            }
            
        }
        int last;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]!=brr[i])
            {
                last = i;
                break;
            }
        }
        // printf("%d",first);
        if(swap(arr,n,first,last) == 0)
        {
            if(reverse(arr,n,first,last) == 0)
            {
                printf("no");
            }
        }
    }
    return 0;
}