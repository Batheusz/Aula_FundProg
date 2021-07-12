#include <stdio.h>

float Mult(float, float);


int main()
{
    printf("%f\n", Mult(2,5));
}

float Mult(float x, float y)
{
    float resultado = 0;
    for (y; y > 0; y--)
        resultado += x;
    return resultado;    
}