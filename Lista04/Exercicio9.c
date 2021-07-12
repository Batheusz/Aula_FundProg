#include <stdio.h>

int Digitos(int);

int main()
{
   printf("%d\n", Digitos(12345));
}

int Digitos(int x)
{
    int algarismos = 0;
    while (x)
    {
        algarismos++;
        x /= 10;
    }
    return algarismos;
}