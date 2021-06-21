#include <stdio.h>
#define TAMANHO 10

int main()
{
    int a = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    int X[TAMANHO] = {0}; 
    for (int i = 0; i < TAMANHO; i++)
    {
        X[i] = a + i;
    }
    
    // Imprimir o vetor
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Vetor[%d] = %d\n", i+1, X[i]);
    }
    return 0;
}