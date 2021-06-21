#include <stdio.h>
#define TAMANHO 5

int main()
{
    int Vetor[TAMANHO] = {0};
    for (int i = 0; i < TAMANHO; i++)
    {   
        printf("Digite seu valor %d: ", i+1);
        scanf("%d",&Vetor[i]);
    }

    // Mostrando a tabuada de cada elemento
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("============================\n");
        printf("|\tTabuada do %d\t   |\n", Vetor[i]);
        printf("============================\n");

        for (int j = 1; j <= 10; j++)
        {
            printf("|\t%2d x %d = %2d\t   |\n", j, Vetor[i], j*Vetor[i]);
        }
        printf("============================\n\n\n");
    }
    return 0;
}