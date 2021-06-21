#include <stdio.h>
#include <math.h>
#define TAMANHO 10

int main()
{
    int X[TAMANHO] = {0}; 
    for (int i = 0; i < TAMANHO; i++)
    {
        X[i] = pow(2, i+1);
    }
    
    // Imprimir o vetor
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Vetor[%d] = %d\n", i+1, X[i]);
    }
    return 0;
}