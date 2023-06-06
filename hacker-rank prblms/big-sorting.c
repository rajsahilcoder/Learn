#include<stdio.h>
#include<string.h>
char **temp;
int main(){
    char **string;
    int n,i;
    scanf("%d",&n);
    string = (char **)malloc(n*sizeof(char*));
    
    temp = (char **)malloc(n*sizeof(char *));
    for(i=0;i<n;i++){
        scanf("%ms",string+i);
    }
    sort(string,0,n-1);
    for(i=0;i<n;i++)
    {printf("%s\n",string[i]);}
    return 0;
}
void sort(char **ar,int i,int j)
{
    int mid;
    if(i<j){
        mid=(i+j)/2;
        sort(ar,i,mid);
        sort(ar,mid+1,j);
        merge(ar,i,mid,mid+1,j);
    }
    
    
    
}

void merge(char **ar,int i1,int j1,int i2,int j2)
{   
    int i,j,k;
    i =i1;
    j=i2;
    k=0;
    while(i<=j1&&j<=j2)
    {
        int l1 = strlen(ar[i]);
        int l2 = strlen(ar[j]);
        if(l1<l2||(l1 == l2&&strcmp(ar[i],ar[j])<0)){
            temp[k] =ar[i];
            k++;i++;
        }
       
        else {
        temp[k] = ar[j];
        k++;j++;
        }
    }
    while(i<=j1){
        temp[k] = ar[i];
        k++;i++;
    }
    while(j<=j2){
        temp[k] = ar[j];
        k++;j++;
    }
    for(i=i1,j=0;i<=j2;i++,j++){
        ar[i] = temp[j];
    }
}