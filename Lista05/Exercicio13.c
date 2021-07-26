#include <stdio.h>

int verificaStr(char*, char*);
void paraMinuscula(char[]);

int main()
{
    char Str1[50] = "Juca Bala", Str2[50] = "balas";
    paraMinuscula(Str1);
    paraMinuscula(Str2);
    if(verificaStr(Str1, Str2))
        printf("Sua primeira string contem a segunda\n");
    else
        printf("Sua primeira string nao contem a segunda\n");

    return 0;
}

int verificaStr(char *s, char *t)
{
    int verificou = 0;
    for (int i = 0; *(s+i) != '\0'; i++)
    {
        if(*(s+i) == *t) // Encontrou a primeira letra da string procurada
        {
            // Verificar se as seguintes sao iguais
            for (int j = 0; *(t+j) != '\0'; j++) 
            {
                if (*(t+j) == *(s+i+j))
                    verificou = 1;
                else
                    verificou = 0;
            }

            if(verificou) // Se depois de percorer t tudo esta ok termina
                return verificou;
        }
    }
    return verificou;
}

void paraMinuscula(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }
}