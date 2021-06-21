#include <stdio.h>
#define TAMANHO 10

int main()
{
    int Vetor[TAMANHO] = {0};
    int Par = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu valor %d: ", i+1);
        scanf("%d",&Vetor[i]);
        if (Vetor[i] % 2 == 0) // Se numero digitado por par soma na variavel
            Par++;
    }
    printf("Seu vetor possui %d numero(s) par(es).", Par);
    return 0;
}