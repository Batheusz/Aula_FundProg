#include <stdio.h>
#define TAM_MAX 10


int main()
{   
    char nome[100];
    int vetor[TAM_MAX]= {0}, cont = 0, soma = 0;
    printf("Digite nome do arquivo: ");
    scanf("%[^\n]s", &nome);
    FILE *arq = fopen(nome, "r");


    if (arq == NULL)
    {
        printf("Arquivo nao encontrado.\n");
        return 0;
    }
    else
    {
        while (fscanf(arq, "%d", &vetor[cont]) != EOF)
        {   
            soma += vetor[cont];
            cont++;
        }
    }

    printf("A media eh: %.2f\n", (float)soma/cont);
    return 0;
}

