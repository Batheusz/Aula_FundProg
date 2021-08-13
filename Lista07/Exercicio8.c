#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[50];
    int idade;
    float altura;
    char telefone[50];
}pessoa;

pessoa* lerStruct(int, FILE *);
void gravarDados(FILE *, pessoa *);
 
int main()
{
    pessoa *amigos;
    FILE *arq = fopen("exercicio8.txt", "a");

    amigos = lerStruct(5, arq);

    fclose(arq);
    return 0;
}

void gravarDados(FILE *arq, pessoa *amigo)
{
    fprintf(arq, "------------------\n");
    fprintf(arq, "%s tem %d anos e %.2f de altura.\nTel.: %s\n", amigo->nome, amigo->idade, amigo->altura, amigo->telefone);
    fprintf(arq, "------------------\n\n");
}

pessoa* lerStruct(int quant, FILE *arq)
{
    pessoa *amigo = (pessoa*) malloc(quant*sizeof(pessoa));

    for (int i = 0; i < quant; i++)
    {
        printf("Digite o nome da %d.o pessoa: ", i+1);
        fflush(stdin);
        scanf("%[^\n]s", &amigo[i].nome);

        printf("Digite a idade da %d.o pessoa: ", i+1);
        scanf("%d", &amigo[i].idade);

        printf("Digite a altura em metros da %d.o pessoa: ", i+1);
        scanf("%f", &amigo[i].altura);

        printf("Digite o telefone da %d.o pessoa: ", i+1);
        fflush(stdin);
        scanf("%[^\n]", &amigo[i].telefone);

        gravarDados(arq, &amigo[i]);
    }
    
}