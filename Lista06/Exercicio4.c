#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;
    int **matriz;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tam);

    matriz = (int**) malloc(tam*sizeof(int*)); 
    for(int i = 0; i < tam; i++)
        matriz[i] = (int*) malloc (tam*sizeof(int));

    for(int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if(i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}