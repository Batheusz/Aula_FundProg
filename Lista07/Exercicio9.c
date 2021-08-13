#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[51];
    float nota1;
    float nota2;
}pessoa;

void ler(int, FILE *);
void analisaMedia(pessoa *);


int main()
{
    FILE *arq = fopen("exercicio9.txt", "r");
    int quant;
    fscanf(arq, "%d", &quant);
    if(arq != NULL)
        ler(quant, arq);
    else
        printf("Arquivo nao encontrado!\n");
    return 0;
}

void ler(int quant, FILE *arq)
{
    pessoa *aluno = (pessoa*) malloc(quant*sizeof(pessoa));

    for (int i = 0; i < quant; i++)
    {
        fscanf(arq, "\n%[^\n]s", &aluno[i].nome);
        fscanf(arq, "%f", &aluno[i].nota1);
        fscanf(arq, "%f", &aluno[i].nota2);
        analisaMedia(&aluno[i]);
    }
    
    free(aluno);
}

void analisaMedia(pessoa *aluno)
{
    float soma = aluno->nota1 + aluno->nota2;
    soma /= 2;
    if (soma < 7)
    {
        printf("O aluno %s esta abaixo de 7.0\n", aluno->nome);
    }
}