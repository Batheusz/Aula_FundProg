#include <stdio.h>

float Media(float, float, float, char);


int main()
{
    printf("%f\n", Media(4,4,5,'P'));
}

float Media(float x, float y, float z, char M)
{
    if (M == 'A')
        return (x+y+z)/3;
    else if (M == 'P')
        return (5*x+3*y+2*z)/10;
    else
        return 0; 
}