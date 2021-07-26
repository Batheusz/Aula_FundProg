#include <stdio.h>

void lerVetor(int*, int);

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