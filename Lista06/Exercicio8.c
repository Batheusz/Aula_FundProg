#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[101];
    float nota;
} Pessoa;

void ler(Pessoa*, int);
void acimaMedia(Pessoa*, int);

int main()
{
    int quantidade;
    Pessoa* pes;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &quantidade);

    pes = (Pessoa*) malloc(quantidade*sizeof(Pessoa));
    
    ler(pes, quantidade);
    acimaMedia(pes, quantidade);

    return 0;
}

void ler(Pessoa* pes, int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%s",&pes[i].nome);
        scanf("%f", &pes[i].nota);
    }
}

void acimaMedia(Pessoa* pes, int n)
{
    float soma = 0, media;
    int notas[2] = {0};

    for (int i = 0; i < n; i++)
    {
        soma += pes[i].nota;
    }
    media = soma / n;

    for (int i = 0; i < n; i++)
    {
        if (pes[i].nota > media)
            notas[0]++;
        else
            notas[1]++;
    }  
    printf("Media..........: %f\n", media);
    printf("Acima da media.: %d\n", notas[0]);
    printf("Abaixo da media: %d\n", notas[1]);
}
