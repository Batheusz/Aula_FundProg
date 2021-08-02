#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[101];
    int idade;
} Pessoa;

void ler(Pessoa*, int);
void mostrar(Pessoa*, int);

int main()
{
    int quantidade;
    Pessoa* pes;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &quantidade);

    pes = (Pessoa*) malloc(quantidade*sizeof(Pessoa));
    
    ler(pes, quantidade);
    mostrar(pes, quantidade);

    return 0;
}

void ler(Pessoa* pes, int n)
{
    for (int i = 0; i < n; i++)
    {
        system("cls");
        fflush(stdin);
        scanf("%s",&pes[i].nome);
        scanf("%d", &pes[i].idade);
    }
}
void mostrar(Pessoa* pes, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nome: %s | Idade: %d\n",pes[i].nome, pes[i].idade);
    }
}