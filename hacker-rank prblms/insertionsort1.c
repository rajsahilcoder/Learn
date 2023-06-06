#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int e =A[n-1];
    int key=-1; 
    for(int i=n-2;i>=0;i--){
        if(A[i]<e){
            key =i;
            break;
        }
        
    }
    for(int i=n-2;i>=0;i--){
        if(e<A[i]){
            A[i+1]=A[i];
            

        }
        if(A[0] == A[1]){
                for(int i=0;i<n;i++){
                    printf("%d ",A[i]);
        
                }
                printf("\n");
                A[0] = e;
            }
        
        else if(e>=A[i]){
            
            A[i+1] = e;
            
        }
        if(i<key){
                break;
            }
        
        for(int i=0;i<n;i++){
            printf("%d ",A[i]);
        
        }
        printf("\n");
    }
    
    return 0;
}