#include <stdio.h>

 void maior(int, int, int, int *);

int main()
{
    int result;
    maior(9, 8, 8,  &result);
    printf("Result = %d\n", result);
    return 0;
}

 void maior(int a, int b, int c, int *result)
{
    if (a > b && a > c)
        *result = a;
    else if (b > c)
        *result = b;
    else 
        *result =c;
}