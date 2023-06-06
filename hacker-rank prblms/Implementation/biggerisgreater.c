#include<stdio.h>

int main()
{
    int t,i,j,k,l,n,p,small;
    char s[100],a[100],temp;
    scanf("%d",&t);
    for(i =0;i<t;i++)
    {
        scanf("%s",s);
        n = strlen(s);
        p =0;
        for(j =n-1;j>0;j--)
        {
            if(s[j]>s[j-1])
            {
                p = 1;
                break;
            }
            
        }
        if(p == 0)
            {
                printf("no answer\n");
            }
            else{
                for(k=j,l=0;s[k]!='\0';k++,l++)
                {
                    a[l] = s[k];
                }
                a[l] = '\0';
                small = 0;
                for(l =1;a[l]!='\0';l++)
                {
                    if(a[small]>a[l])
                    {
                        if(a[l]>s[j-1])
                        {
                            small = l;
                        }
                    }
                }
                temp = s[j-1];
                s[j-1] = a[small];
                s[j] = '\0';
                a[small ] = temp;
                n = strlen(a);
                for(k =0;k<n-1;k++)
                {
                    for(l=0;l<n-1-k;l++)
                    {
                        if(a[l]>a[l+1])
                        {
                            temp = a[l];
                            a[l] = a[l+1];
                            a[l+1] = temp;
                        }
                    }
                }
                printf("%s%s\n",s,a);
            }
    }

    return 0;
}