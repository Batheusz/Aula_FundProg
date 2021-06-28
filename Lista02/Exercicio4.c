#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Vogais = 0;
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0; Str[i] != '\0'; i++)
    {
        switch (Str[i])
        {
        case 'A':
            Vogais++;
            break;
        case 'a':
            Vogais++;
            break;
        case 'E':
            Vogais++;
            break;
        case 'e':
            Vogais++;
            break;
        case 'I':
            Vogais++;
            break;
        case 'i':
            Vogais++;
            break;
        case 'O':
            Vogais++;
            break;
        case 'o':
            Vogais++;
            break;
        case 'U':
            Vogais++;
            break;
        case 'u':
            Vogais++;
            break;
        } 
        
    }
    printf("Sua string tem %d vogais.\n", Vogais);
    return 0;
}