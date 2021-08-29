#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int par;
    int impar;
}rgResult;

void manipularArquivo(FILE*, FILE*);
int *criarVetor(int);
rgResult contar(int[], int);

int main()
{
    FILE* arq_ler, *arq;

    arq_ler = fopen("DADOS.txt", "r");
    arq = fopen("SAIDA.txt", "w");
    if (arq_ler == NULL)
        printf("Impossivel abrir arquivo de leitura, tente novamente!\n");
    if (arq == NULL)
        printf("Impossivel abrir arquivo de escrita, tente novamente!\n");

    manipularArquivo(arq_ler, arq);

    fclose(arq_ler);
    fclose(arq);
    return 0;
}

int *criarVetor(int n)
{
    int* vet = (int*) malloc(n*sizeof(int));

    return vet;
}

rgResult contar(int vet[], int n)
{
    rgResult aux = {0,0};
    int i;
    for (i = 0; i < n; i++)
    {
        if(vet[i]%2 == 0)
            aux.par++;
        else
            aux.impar++;
    }
    
    return aux;
}

void manipularArquivo(FILE* ler, FILE* escrever)
{
    int tamVet, i;
    int* vet;
    char nomeVet;
    rgResult par_impar;

    while (fscanf(ler, "%d %c", &tamVet, &nomeVet) != EOF)
    {
        vet = criarVetor(tamVet);

        fprintf(escrever, "%c = { ", nomeVet);
        for (i = 0; i < tamVet; i++)
        {
            fscanf(ler, "%d", &vet[i]);
            fprintf(escrever, "%d ", vet[i]);
        }
        fprintf(escrever, "} tamanho = %d\n", tamVet);

        par_impar = contar(vet,tamVet);
        fprintf(escrever, "Qtde de pares   = %d\n", par_impar.par);
        fprintf(escrever, "Qtde de impares = %d\n", par_impar.impar);

        free(vet);
    }
}
