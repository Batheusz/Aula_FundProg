#include <stdio.h>

void lerVetor(int*, int);
void analisarPar(int*, int);

int main()
{
    int Vetor[5] = {0};
    lerVetor(Vetor, 5);
    analisarPar(Vetor, 5);
    
    return 0;
}

void lerVetor(int *x, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite seu %do. numero: ", i+1);
        scanf("%d", &*(x+i));
    }
    
}

void analisarPar(int *x, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        if (*(x+i) % 2 == 0)
            printf("Vetor em [%d] tem valor de %d\n", i, *(x+i));
    
}