#include <stdio.h>

void escreverArquivo(char*, char[]);

int main()
{
    FILE *arq = fopen("exercicio5.txt", "a");
    
    escreverArquivo(arq, "ola\n");
    escreverArquivo(arq, "mundo\n");
    escreverArquivo(arq, "ola mundo\n");

    fclose(arq);
    return 0;
}

void escreverArquivo(char* arq, char str[])
{
    fputs(str, arq);
}
