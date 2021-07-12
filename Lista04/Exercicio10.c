#include <stdio.h>

int EhPalindromo(char[]);

int main()
{
    char Palavra[200];
    printf("Digite sua palavra: ");
    scanf("%[^\n]", &Palavra);
    if (EhPalindromo)
        printf("Sua palavra eh palindroma\n");
    else
        printf("Sua palavra nao eh palindroma\n");    
}

int EhPalindromo(char Palavra[])
{
    int j = 0;
    for (int i = 0; Palavra[i] != '\0'; i++) // conta os caracter
        j++;
    for (int i = 0; i <= j/2; i++)
    {
        j--; // tira 1 no começo pq j para na casa do '\0'
        if (Palavra[i] != Palavra[j])
            return 0;
    }
    return 1;
    
}