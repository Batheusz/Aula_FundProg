#include <stdio.h>

int main()
{
    char Str[100];
    scanf("%[^\n]", Str);
    unsigned short int Flag_Maiuscula = 1;
    fflush(stdin);
    for (int i = 0; Str[i] != '\0'; i++)
    {
        if((Str[i] > 'Z' || Str[i] < 'A') && Str[i] != ' ')
            Flag_Maiuscula = 0;
        
    }
    if (Flag_Maiuscula)
        printf("Todos seus caracteres sao maiusculos.\n");
    else
        printf("Seus caracteres nao sao todos maiusculos.\n");
    
    return 0;
}