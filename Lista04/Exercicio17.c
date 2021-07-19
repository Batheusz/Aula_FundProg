#include <stdio.h>

int Retorno(int);

int main()
{
    printf("%d\n", Retorno(2));
    return 0;
}

int Retorno(int Num)
{
    int soma = 0;
    if(Num == 1)
        return 1;
    else
        soma = (Num + Retorno(Num-1));
        return soma;
}