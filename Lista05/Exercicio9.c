#include <stdio.h>

void procuraChar(char*, char);

int main()
{
    char Str[50] = "JuCA BaLA";
    procuraChar(Str, 'a');
    
    return 0;
}

void procuraChar(char *s, char c) // faz diferença entre maiscula e minuscula
{
    for (int i = 0; *(s+i) != '\0'; i++)
        if (*(s+i) == c)
            printf("Encontrado '%c' na posicao [%d] ,", c, i);
    
}