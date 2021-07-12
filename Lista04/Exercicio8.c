#include <stdio.h>

int SomaPares(int);
int MultPares(int);

int main()
{
    int num, soma;
    for (num = 1000; num <= 9999; num++)
    {
        if (num == MultPares(SomaPares(num)))
            printf("%d, ", num);
    }
    printf("\n");
}

int SomaPares(int x)
{
    int soma = (x / 100) + (x % 100);
    return soma;    
}

int MultPares(int x)
{
    return x * x;
}