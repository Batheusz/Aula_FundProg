#include <stdio.h>

int main()
{
    char Str[100], Caracter;
    printf("Digite uma frase:\n");
    scanf("%[^\n]", Str);
    fflush(stdin);
    printf("Digite um caracter:\n");
    scanf("%c", &Caracter);
    for (int i = 0; Str[i] != '\0'; i++)
    {
        if (Caracter >= 'A' && Caracter <= 'Z')
        {
            if (Str[i] == Caracter || Str[i] == Caracter+32)
                Str[i] = '*';
        }
        else if (Caracter >= 'a' && Caracter <= 'z')
        {
            if(Str[i] == Caracter || Str[i] == Caracter-32)
                Str[i] = '*';
        }
    }
    printf("%s\n", Str);
    return 0;
}