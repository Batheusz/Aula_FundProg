#include <stdio.h>

void mediaAritmetica(float, float, float*);

int main()
{
    float result;
    mediaAritmetica(10, 8, &result);
    printf("Result = %.2f\n", result);
    return 0;
}

void mediaAritmetica(float a, float b, float *result)
{
    *result = (a + b) / 2;
}