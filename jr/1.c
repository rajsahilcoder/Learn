#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// void another(int *ptr)
// {
//     (*ptr) += 23;
// }
void another(int num)
{
    num += 23;
    printf("value: %d-->address: %d\n", num, &num);
}
int main()
{
    int num = 23;
    int *ptr = &num;

    // printf("value: %d --> address: %d\n", *ptr, ptr);
    printf("value: %d-->address: %d\n", num, &num);
    another(num);
    // printf("value: %d --> address: %d", *ptr, ptr);

    return 0;
}