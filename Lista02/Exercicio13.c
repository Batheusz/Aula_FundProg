#include <stdio.h>

int main()
{
    char Str[100];
    unsigned short int Palavras = 1;
    printf("Digite uma frase: ");
    scanf("%[^\n]", Str);
    fflush(stdin);
    for (int i = 0 ; Str[i] != '\0'; i++)
    {
      if (Str[i] == ' ' && Str[i+1] != '\0')
          Palavras++;
    }
    printf("Sua frase tem %d palavra(s).\n", Palavras);
         
    return 0;
}