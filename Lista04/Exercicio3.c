#include <stdio.h>

float Exp(float, float);


int main()
{
    printf("%f\n", Exp(2,5));
}

float Exp(float x, float y)
{
    float resultado = 1;
    for (y; y > 0; y--)
        resultado *= x;
    return resultado;    
}