#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Flag_Oct = 1;
    printf("Digite uma sequencia: ");
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0 ; Str[i] != '\0'; i++)
    {
        if (Str[i] < '0' || Str[i] > '7')
        {
            Flag_Oct = 0;
            break;
        }
    }
    if (Flag_Oct)
        printf("Seu numero eh octal.\n");
    else
        printf("Seu numero nao eh octal.\n");        
    return 0;
}