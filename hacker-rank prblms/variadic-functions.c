#include<stdio.h>
#include<stdarg.h>

int getsum(int number,...){
    va_list list;
    int sum=0;

    va_start(list,number);

    for(int i=0;i<number;i++){
        int n = va_arg(list,int);
        sum = sum+n;
    }
    va_end(list);
    return sum;
}

int main()
{
    printf("Sum of 2 numbers is: %d",getsum(2,3,4));
    printf("\nSum of 4 numbers is: %d",getsum(4,3,4,9,7));
    printf("\nSum of 6 numbers is: %d",getsum(6,3,4,6,3,4,8));

    return 0;
}