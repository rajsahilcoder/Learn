#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int max =0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        max = max<A[i]?A[i]:max;
    }
    int B[max+1];
    for(int i=0;i<=max;i++){
        B[i] =0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=max;j++){
            if(j == A[i]){
                B[j]++;
            }
        }
    }
    for(int j=0;j<=max;j++){
        if(B[j]>0){
            for(;B[j]>0;B[j]--){
                printf("%d ",j);
            }
        }
    }
    

    return 0;
}