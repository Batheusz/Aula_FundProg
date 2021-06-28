#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Flag_Binario = 1;
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0; Str[i] != '\0'; i++)
    {
        if (Str[i] != '0' && Str[i] != '1')
        {
            Flag_Binario = 0;
            break;
        }
    }
    if (Flag_Binario)
        printf("Sua sequencia eh binaria"); 
    else
        printf("Sua sequencia nao eh binaria"); 
    return 0;
}