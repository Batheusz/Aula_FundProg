#include <stdio.h>
#define TAMANHO 10

int main()
{
    int a[TAMANHO] = {10, 2, 7, 8, 5, 3, 22, 17, 18, 6},
        b[TAMANHO] = {0};
    for (int i = 0; i < TAMANHO; i++)
    {
        b[i] = a[i] % 2;
    }

    //  Imprimir
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("VetorA[%d] = %d\t\tVetorB[%d] = %d\n", i+1, a[i], i+1, b[i]);
    }

    return 0;
}