#include <stdio.h>
#define TAMANHO 10

int main()
{
    int VetorA[TAMANHO] = {0},
        VetorB[TAMANHO] = {0},
        VetorC[TAMANHO] = {0};
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu valor %d do VetorA: ", i+1);
        scanf("%d",&VetorA[i]);
        printf("Digite seu valor %d do VetorB: ", i+1);
        scanf("%d",&VetorB[i]);
        VetorC[i] = VetorA[i] - VetorB[i];
    }   
    
    // Irei percorrer os vetores
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("VetorA[%d] = %d\t\tVetorB[%d] = %d\t\tVetorC[%d] = %d\n", i, VetorA[i], i, VetorB[i], i, VetorC[i]);
    }  
    return 0;
}