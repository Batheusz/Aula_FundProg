#include <stdio.h>
#include <string.h>

int main()
{
    char Str[100];
    unsigned short int Palindromo = 1, Tamanho = 0;
    printf("Digite uma palavra:\n");
    scanf("%[^\n]", Str);
    fflush(stdin);
    Tamanho = strlen(Str);
    for (int i = 0; Str[i] != '\0'; i++)
    {
        if (Str[i] != Str[(Tamanho-1)-i])
        {
            Palindromo = 0;
            break;
        }
    }
    if (Palindromo)
        printf("Sua palavra eh palindroma.\n");
    else
        printf("Sua palavra nao eh palindroma.\n");
    
    return 0;
}