#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    float f = 5;
    if((sqrt(f)-abs(sqrt(f)))== 0)
    {
        printf("integer square!");
    }
    else
    {
        printf("not");
    }

    return 0;
}