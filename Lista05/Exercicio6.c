#include <stdio.h>

void lerVetor(int*, int);
void imprimeVetor(int*, int);

int main()
{
    int Vetor[5] = {0};
    lerVetor(Vetor, 5);
    imprimeVetor(Vetor, 5);
    
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

void imprimeVetor(int *x, int tamanho)
{
    system("cls");
    for (int i = 0; i < tamanho; i++)
        printf("Vetor em [%d] tem valor de %d\n", i, *(x+i));
}