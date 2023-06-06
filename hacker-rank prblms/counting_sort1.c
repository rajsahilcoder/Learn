#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        max = A[i]>max?A[i]:max;
    }
    // if(n>max){
    //     max = n;
    // }
    // printf("%d\n",max);
    int result[100];
    for(int j=0;j<100;j++){
        result[j] = 0;
        for(int i=0;i<n;i++){
            if(j == A[i]){
                result[j] ++;
            }
        }
    }
    for(int i=0;i<100;i++){
        printf("%d ",result[i]);
    }

    return 0;
}
