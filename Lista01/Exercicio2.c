#include <stdio.h>>
#define TAMANHO 7

int main()
{
    int VetorA[TAMANHO],
        VetorB[TAMANHO];
    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu valor %d: ", i+1);
        scanf("%d", &VetorA[i]); // Ler valor do usuario

        // Atribuir valor de B conforme A
        if(VetorA[i] < 50)
            VetorB[i] = -1;
        else if(VetorA[i] > 50)
            VetorB[i] = 1;
        else
            VetorB[i] = 0;
    }

    // Mostrando os vetores A e B
    printf("VetorA = ");
    for(int i = 0; i < TAMANHO; i++)
        printf("%d ", VetorA[i]);
    printf("\nVetorB = ");
    for (int i = 0; i < TAMANHO; i++)
        printf("%d ", VetorB[i]);

    return 0;
}