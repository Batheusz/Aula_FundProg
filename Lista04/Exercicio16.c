#include <stdio.h>

int Retorno(int);

int main()
{
    printf("%d\n", Retorno(0));
    return 0;
}

int Retorno(int Num)
{
    int retorno = 0;
    if(Num == 1)
    {
        printf("1\n");
        return 1;
    }
    else
        retorno = Retorno(Num-1);
        printf("%d\n", retorno);
        return 1+retorno;
}