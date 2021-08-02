#include <stdio.h>

int main()
{
    int tam;
    int *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int*) malloc(tam*sizeof(int));

    for(int i = 0; i < tam; i++)
        scanf("%d", &vet[i]);

    printf("Vet = {");
    for(int i = 0; i < tam; i++)
    {
        if (i != tam-1)
            printf("%d,", vet[i]);
        else        
            printf("%d}", vet[i]);
    }

    return 0;
}