#include <stdio.h>

void LerVetor(int[], int);
void ConcaternarVetor(int[], int[],int[], int);

int main()
{
    int A[5], B[5], C[10];
    LerVetor(A,5);
    LerVetor(B,5);
    ConcaternarVetor(A,B,C,5);
}

void LerVetor(int Vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite seu %do. valor: ", i+1);
        scanf("%d", &Vetor[i]);
    }
    
}

void ConcaternarVetor(int VetorA[], int VetorB[], int VetorC[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        VetorC[i] = VetorA[i];
    for (int i = 0; i < tamanho; i++)
        VetorC[i+tamanho] = VetorB[i];

    printf("Vetor concatenacao: { ");
    for (int i = 0; i < 2*tamanho; i++)
        printf("%d ", VetorC[i]);
    printf("}\n");
}