#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Letras = 0;
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0; Str[i] != '\0'; i++)
    {
        Letras++;
        if (Str[i] == ' ') // Retirar contagem dos espaços
        {
            Letras--;
        }
        
    }
    printf("Sua string tem %d caractere(s).\n", Letras);
    return 0;
}