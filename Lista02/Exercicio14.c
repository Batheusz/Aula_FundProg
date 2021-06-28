#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Letras = 0, Palavras = 1;
    printf("Digite uma frase: ");
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0 ; Str[i] != '\0'; i++)
    {
        if (Str[i] != ' ')
            Letras++;
        if ((Str[i+1] == ' ' || Str[i+1] == '\0') && Str[i] != ' ')
        {   
            printf("Palavra %d tem %d letra(s).\n", Palavras, Letras);
            Letras = 0;
            Palavras++;
        }
    }
         
    return 0;
}