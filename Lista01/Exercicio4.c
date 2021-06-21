#include <stdio.h>
#define TAMANHO 5

int main()
{
    int Vetor[TAMANHO] = {0};
    int Soma = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu valor %d: ", i+1);
        scanf("%d",&Vetor[i]);
        Soma += Vetor[i];
    }
    // Mostra o Vetor, soma do elementos e a média
    printf("Seu Vetor eh: ");
    for (int i = 0; i < TAMANHO; i++)
        printf("%d ", Vetor[i]);
    printf("\nSua soma do elementos eh: %d\n", Soma);
    printf("Sua media eh: %d\n", Soma/TAMANHO);    
    return 0;
}