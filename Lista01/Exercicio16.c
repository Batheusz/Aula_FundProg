#include <stdio.h>
#define TAMANHO 7

int main()
{
    int A[TAMANHO] = {0},
        B[TAMANHO] = {0},
        C[TAMANHO] = {0};
    int Contador_Intersecao = 0; // Contador para organizar as posições do vetor C
    for (int i = 0; i < TAMANHO; i++)
    {   
        printf("Digite seu valor %d do VetorA: ", i+1);
        scanf("%d",&A[i]);
        printf("Digite seu valor %d do VetorB: ", i+1);
        scanf("%d",&B[i]);
        if(A[i] == B[i]) // Se A igual a B
        {
            C[Contador_Intersecao] = A[i]; // Salvo valor de A
            Contador_Intersecao++; // Aumento meu contador de posição
        }  
    }
    
    return 0;
}