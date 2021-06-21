#include <stdio.h>
#define TAMANHO 6

int main()
{
    int a[TAMANHO] = {0},
        b[TAMANHO] = {0};
    int item = 0;
    unsigned short int Igual = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu valor %d do VetorA: ", i+1);
        scanf("%d",&a[i]);
        printf("Digite seu valor %d do VetorB: ", i+1);
        scanf("%d",&b[i]);
        if (a[i] == b[i])
            Igual = 1;
        else
            Igual = 0; 
        system("cls");    
    }

    // Imprime os vetores
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("VetorA[%d] = %d\t\tVetorB[%d] = %d\n", i, a[i], i, b[i]);
    }  
    if(Igual)
        printf("Seus vetores sao iguais");
    else    
        printf("Seus vetores sao diferentes");
    return 0;
}