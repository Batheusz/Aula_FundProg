#include <stdio.h>
#include <string.h>

int main()
{
    char Str[100], Str2[100];
    unsigned short int Flag_Igual = 1;
    printf("Digite a primeira string: ");
    scanf("%[^\n]", Str);
    fflush(stdin);
    printf("Digite a segunda string: ");
    scanf("%[^\n]", Str2);
    fflush(stdin);
    // Manda as duas para lowercase para possibilitar comparação
    strlwr(Str);
    strlwr(Str2);

    for (int i = 0 ; Str[i] != '\0'; i++)
    {
        if (Str[i] != Str2[i])
        {
            Flag_Igual = 0;
            break;
        }
    }
    if (Flag_Igual)
        printf("Suas strings sao igual.\n");
    else
        printf("Suas strings sao diferentes.\n");        
    return 0;
}