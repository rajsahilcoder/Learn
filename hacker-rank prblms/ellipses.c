#include<stdio.h>
#include<stdarg.h>

void func(int number,...){
    va_list list;
    va_start(list,number);

    printf("%d",va_arg(list,int));
    printf("\n%d",va_arg(list,int));
    printf("\n%d",va_arg(list,int));

}

int main()
{
    func(2,3,5);

    return 0;
}