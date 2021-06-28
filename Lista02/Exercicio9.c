#include <stdio.h>
#include <string.h>

int main()
{
    char Str[100];
    unsigned short int j = 0, Tamanho = 0;
    printf("Digite uma palavra: ");
    scanf("%[^\n]", Str);
    fflush(stdin);
    Tamanho = strlen(Str);
    char Inverso[Tamanho+1];
    for (int i = (Tamanho-1) ; i >= 0; i--)
    {
        Inverso[j] = Str[i];
        j++;
    }
    Inverso[j] = '\0';
    
    printf("Entrada: %s\n", Str);
    printf("Inverso: %s\n", Inverso);
    
    return 0;
}