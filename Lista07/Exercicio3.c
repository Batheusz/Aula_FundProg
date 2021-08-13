#include <stdio.h>
#include <stdlib.h>

char* lerChar(int);
void criarArquivo(char*, int);

int main()
{   
    char *str;
    str = lerChar(10);
    criarArquivo(str, 10);
    
    return 0;
}

char* lerChar(int quantidade)
{
    char *str = (char*) malloc(quantidade*sizeof(char));

    printf("Digite %d caracteres:\n", quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }

    return str;
}

void criarArquivo(char* str, int quantidade)
{
    FILE *arq;
    arq = fopen("exercicio3.txt", "a");

    for (int i = 0; i < quantidade; i++)
    {
        fputc(str[i], arq);
        fputc('\n', arq);
    }
    
    fclose(arq);
}