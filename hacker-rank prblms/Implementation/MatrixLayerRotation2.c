#include<stdio.h>

int minimum(int a,int b,int c,int d){
    int arr[] = {a,b,c,d};
    int min = arr[0];
    for(int i = 0;i<4;i++)
    {
        if(min>arr[i])
        min = arr[i];
    }
    return min;
}

int main()
{
    int rows,cols,rot;
    scanf("%d%d%d",&rows,&cols,&rot);
    int arr[rows][cols];
    int result[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    rows--;
    cols--;
    for(int r = 0;r<=rows;r++)
    {
        for(int c=0;c<=cols;c++)
        {
            
            int min = minimum(r,c,rows-r,cols-c);
            int maxr = rows-min;
            int maxc = cols-min;
            int lenring = (2*(maxr+maxc) - 4*min);
            int row = r;
            int col = c;
            for(int a=0;a<rot%lenring;a++)
            {
                if(row == min && col>min)
                col--;
                else if(col == min && row<maxr)
                row++;
                else if(row==maxr&&col<maxc)
                col++;
                else if(col == maxc && row>min)
                row--;
            }
            result[row][col] = arr[r][c];
            
        }
    }
    for(int r=0;r<=rows;r++)
    {
        for(int c=0;c<=cols;c++)
        {
            printf("%d ",result[r][c]);
        }
        printf("\n");
    }
    return 0;
}
