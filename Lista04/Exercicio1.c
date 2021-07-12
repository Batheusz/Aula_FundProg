#include <stdio.h>

float Maior(float, float);


int main ()
{
    printf("%f\n", Maior(4,3));
}

float Maior (float x, float y)
{
    if (x > y)
        return x;
    else if (x < y)
        return y;
    else
        return 0;        
}