#include <stdio.h>

int SomaVet(int [], int);

int main()
{
    int A[3] = {1,2,3};
    printf("A soma do seu vetor eh: %d\n", SomaVet(A,3));     
    return 0;
}

int SomaVet(int Vet[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        soma += Vet[i];
    return soma;    
}