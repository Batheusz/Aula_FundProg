#include <stdio.h>
#define TAMANHO 6

int main()
{
    int VetorNum[TAMANHO] = {0};
    for( int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu %d numero: ", i+1);
        scanf("%d", &VetorNum[i]);
    }
    printf("=============================\nSeus numeros inversos sao:\n");
    for( int i = (TAMANHO-1); i >= 0; i--)
    {
        printf("%d, ", VetorNum[i]);
    }
    return 0;
}