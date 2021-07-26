#include <stdio.h>

void lerVetor(int*, int);
void dobroVetor(int*, int);

int main()
{
    int Vetor[5] = {0};
    lerVetor(Vetor, 5);
    dobroVetor(Vetor, 5);
    
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

void dobroVetor(int *x, int tamanho)
{
    system("cls");
    for (int i = 0; i < tamanho; i++)
    {
        *(x+i) *= 2;
        printf("Vetor em [%d] tem valor de %d\n", i, *(x+i));
    }
}