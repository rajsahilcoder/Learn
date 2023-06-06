#include<stdio.h>

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int merge(int *A,int mid,int low,int high ){
    int i,j,k,B[100];
    i=low;
    j=mid+1;
    k = low;
    int s=0;
    while(i<=mid&&j<=high){
        if(A[i]<=A[j]){
            B[k] = A[i];
            i++;k++;
        }
        else{
            B[k] = A[j];
            j++;k++;
            s+=mid -i;
        }
    }
    while(i<=mid){
        B[k] = A[i];
        i++;k++;
    }
    while(j<=high){
        B[k] = A[j];
        j++;k++;
    }
    for(int i=low;i<=high;i++){
        A[i] = B[i];
    }
    return s;
}
int mergeSort(int *A,int low,int high){
    int mid;
    int k=0;
    if(low<high){
        mid = (low+high)/2;
        k+=mergeSort(A,low,mid);
        k+=mergeSort(A,mid+1,high);
        k+=merge(A,mid,low,high);
    }
    return k;

}

int main()
{
    int n, t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int s[n];
        for(int i=0; i<n; i++)
            scanf("%d",&s[i]);
         
        long int shift = mergeSort(s, 0, n-1);
        
        printf("%d\n",shift);
    }
    
    return 0;
}