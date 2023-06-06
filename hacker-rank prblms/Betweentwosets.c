#include<stdio.h>


int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
    
}
int total(int *A,int *B,int n,int m){
    
    int factor=B[0];
    for(int i=0;i<m;i++){
        factor=gcd(factor,B[i]);
    }
    int multiple =1;
    for(int i=0;i<n;i++){
        multiple=lcm(multiple,A[i]);
    }
    
    int get =0;
    for(int i=1;i>=1;i++){
        if(i*multiple > factor){
            break;
        }
        if(factor%(i*multiple)==0){
            get++;
        }
        
    }
    return get;

}
int main()
{
    int n,m;
    printf("n and m\n");
    scanf("%d\n%d",&n,&m);
    int A[n];
    int B[m];
    printf("Fill array A...\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Fill array B...\n");
    for(int j=0;j<m;j++){
        scanf("%d",&B[j]);
    }
    printf("%d",total(A,B,n,m));
    
    

    return 0;
}