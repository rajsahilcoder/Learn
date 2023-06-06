#include<stdio.h>
#include<stdlib.h>
long merge(long long *a,long low,long mid,long high){
    long l =0;
    long i = low;
    long j = mid;
    long s=0;
    long long k[high-low+1];
    while(i<mid && j<=high)
    {
        if(a[i]<=a[j]){
            k[s] = a[i];
            i++;s++;
            
        }
        else
        {
            k[s] = a[j];
            s++;j++;
            l+=mid-i;
        }
        
    }
    while(i<low)
    {
        k[s] = a[i];
        i++;s++;
    }
    while(j<=high)
    {
        k[s] = a[j];
        j++;s++;
    }
    for(long i=low;i<=high;i++)
    {
        k[i] = a[i];
    }
    return l;
}
long Sort(long long *a,long low,long high)
{
    long k=0;
    if(low<high)
    {
        long mid = low +(high -low)/2;
        k +=Sort(a,low,mid);
        k +=Sort(a,mid+1,high);
        
        k += merge(a,low,mid,high);
        
    }
    return k;
}
int main()
{
    int t;
    scanf("%d",&t);
    // long s[t];
    long n[t];
    long long *a[t];
    for(int i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
        a[i]  = (long long *)malloc(100000*sizeof(long long));
        for(long j=0;j<n[i];j++)
        {
            scanf("%lld",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<t;i++)
    {
        // printf("%ld\n",Sort(a[i],0,n[i]-1));
        Sort(a[i],0,n[i]-1);

        for(long j=0;j<n[i];j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    return 0;
    
}
