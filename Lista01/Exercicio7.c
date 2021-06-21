#include <stdio.h>
#define TAMANHO 8

int main()
{
    int Vetor[TAMANHO] = {0};
    int x = 0, y = 0, Auxiliar = 0;
    for (int i = 0; i < TAMANHO; i++)
    {   
        printf("Digite seu valor %d: ", i+1);
        scanf("%d",&Vetor[i]);
    }

    // Lendo a primeira posicao e vendo se esta entre 0 e 7    
    printf("Digite sua primeira posicao (0 - 7): ");
    scanf("%d", &Auxiliar);
    if(Auxiliar >= 0 && Auxiliar < TAMANHO)
        x = Auxiliar;
    else
        printf("Posicao invalida.\n");

    // Lendo a segunda posicao e vendo se esta entre 0 e 7    
    printf("Digite sua segunda posicao (0 - 7): ");
    scanf("%d", &Auxiliar);
    if(Auxiliar >= 0 && Auxiliar < TAMANHO)
        y = Auxiliar;
    else
        printf("Posicao invalida.\n");

    printf("Sua soma dos elementos das posicoes eh: %d", Vetor[x]+ Vetor[y]);
    return 0;
}