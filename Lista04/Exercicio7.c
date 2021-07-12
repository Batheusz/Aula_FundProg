#include <stdio.h>

int SomaDiv(int);

int main()
{
    int num;
    for (num = 1; num <= 500; num++)
    {
        if (num == SomaDiv(num))
            printf("%d, ", num);
    }
    printf("\n");
}

int SomaDiv(int x)
{
    int soma = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
            soma += i;        
    }
    return soma;    
}