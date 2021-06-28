#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Flag_Hex = 1;
    printf("Digite uma sequencia: ");
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0 ; Str[i] != '\0'; i++)
    {
        if ((Str[i] < '0' || Str[i] > '9') && (Str[i] < 'A' || Str[i] > 'F'))
        {
            Flag_Hex = 0;
            break;
        }
    }
    if (Flag_Hex)
        printf("Seu numero eh hexadecimal.\n");
    else
        printf("Seu numero nao eh hexadecimal.\n");        
    return 0;
}