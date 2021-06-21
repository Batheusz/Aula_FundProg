#include <stdio.h>
#define TAMANHO 7

int main()
{
    int Vetor[TAMANHO] = {0};
    int Par = 0, Impar = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu valor %d: ", i+1);
        scanf("%d",&Vetor[i]);
        // Avalia se o numero e par ou impar
        if(Vetor[i] % 2 == 0)
            Par++;
        else
            Impar++;
    }
    // Mostra o percentual de elementos pares e impares
    printf("Seu vetor eh formado por %d%% de pares e %d%% de impares\n", (Par*100)/TAMANHO, (Impar*100)/TAMANHO);
    
    return 0;
}