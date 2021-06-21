#include <stdio.h>
#define TAMANHO 20

int main()
{
    float Vetor[TAMANHO] = {0};
    float Dolar;
    printf("Digite o valor do Dolar em relacao ao Real: ");
    scanf("%f", &Dolar);
    for (int i = 1; i <= TAMANHO; i++)
    {   
        Vetor[(i-1)] = Dolar * i; 
    }
    
    // Imprime o vetor
    printf("Seu vetor eh:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Vetor[%2d] = %.2f\n", i+1, Vetor[i]);
    }
    return 0;
}