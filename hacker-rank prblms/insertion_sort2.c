#include<stdio.h>

int main()
{
    int n,temp,j;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=1;i<n;i++){
        temp = A[i];
        for(j=i-1;temp<=A[j] && j>=0;j--){
            A[j+1] = A[j];

        }
        A[j+1] = temp;
        for(int k=0;k<n;k++){
            printf("%d ",A[k]);
        }
        printf("\n");
        
    }

    return 0;
}