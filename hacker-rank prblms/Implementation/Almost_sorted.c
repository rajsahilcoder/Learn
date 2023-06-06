#include <stdio.h>
#include <stdlib.h>
int isSorted(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){
            return 0;
            // break;
        }
        
        
    }
    return 1;
}

int  after_rev(int *arr,int n)
{
    int ans = 0;
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i] = arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=n-1;j>=0;j--)
        {
            
            int k=j,m=i;
            while(k>=i&&m<=j){
                b[m]=arr[k];
                k--;m++;
            }
            
            if(isSorted(b,n)==1){
                ans++;
                printf("yes\nreverse %d %d",i+1,j+1);
                // return 1;
                break;
            }
            else{
                 for(int l=0;l<n;l++)
                 {
                     b[l] = arr[l];
                 }
            }
            
        }
    }
    return ans;
}
int swap(int *arr,int n)
{
    int ans =0;
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i] = arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            b[i] = arr[j];
            b[j] = arr[i];
            if(isSorted(b,n) == 1)
            {
                ans++;
                printf("yes\nswap %d %d",i+1,j+1);
                // return 1;
                break;
            }
            else{
                b[i] =arr[i];
                b[j] = arr[j];
            }
        }
        
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    if(isSorted(arr, n) == 1)
    {
        printf("yes");
        exit(0);
    }
    if(swap(arr,n) == 0)
    {
        
        if(after_rev(arr, n)==0)
        {
            printf("no");
        }
    }
    return 0;
}
