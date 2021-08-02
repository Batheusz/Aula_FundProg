#include <stdio.h>

int main()
{
    int tam, maior, menor;
    int *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int*) malloc(tam*sizeof(int));

    for(int i = 0; i < tam; i++)
        scanf("%d", &vet[i]);

    maior = vet[0], menor = vet[0];
    for(int i = 0; i < tam; i++)
    {
        if (vet[i] > maior)
            maior = vet[i];
        if (vet[i] < menor)
            menor = vet[i];                
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    
    return 0;
}