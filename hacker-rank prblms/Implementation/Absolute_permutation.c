#include<stdio.h>

int main()
{
    int i,j,k,n,t,l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
        scanf("%d %d",&n,&k);
        if(k==0)
        {
            for(i=1;i<=n;i++)
            printf("%d ",i);
            printf("\n");
        }
        else if(n%(2*k) == 0)
        {
            for(i = 0;i<(n/(2*k));i++)
            {
                for(j=1;j<=k;j++)
                printf("%d ",((2*k*i)+k+j));
                for(j=1;j<=k;j++)
                printf("%d ",((2*k*i)+j));
            }
            printf("\n");
        }
        else{
            printf("-1\n");
        }
    }


    return 0;
}