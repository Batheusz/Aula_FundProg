#include <stdio.h>
#include <string.h>

typedef struct
{
    char Str1[51];
    char Str2[51];
    char StrRes[101];
}Combinador;

int main()
{
    Combinador Palavra;
    int n, i, j, k;
    scanf("%d", &n);
    while(n--)
    {
        fflush(stdin);
        scanf("%s %s", &Palavra.Str1, &Palavra.Str2);
        int Tam1 = strlen(Palavra.Str1), Tam2 = strlen(Palavra.Str2);
        i = 0, j = 0, k = 0;
        while (i < Tam1 && j < Tam2)
        {
            Palavra.StrRes[k] = Palavra.Str1[i];
            i++;
            k++;
            Palavra.StrRes[k] = Palavra.Str2[j];
            j++;
            k++;
        }
        for (i; i < Tam1; i++, k++)
            Palavra.StrRes[k] =  Palavra.Str1[i];  
        for (j; j < Tam2; j++, k++)
            Palavra.StrRes[k] =  Palavra.Str2[j];      
        Palavra.StrRes[k+1] = '\0';
        printf("%s\n",Palavra.StrRes);
    }

    return 0;
}