#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Posicao = 0;;
    printf("Digite seu nome: ");
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0 ; Str[i] != '\0'; i++)
    {
        if (Str[i] == ' ')
            Posicao = i+1;
    }
    printf("Seja bem-vindo(a) Sr(a). ");
    for (Posicao; Str[Posicao] != '\0'; Posicao++)
    {
        printf("%c", Str[Posicao]);
    }
    printf("\n");
        
    return 0;
}