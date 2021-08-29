#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char frase[51];
}minha_string;

void lerString(int, minha_string*);
void imprimeString(int, minha_string*);

int main()
{
    minha_string* texto;
    int num;
    scanf("%d",&num);
    texto = (minha_string*) malloc (num*sizeof(minha_string));
    lerString(num, texto);
    imprimeString(num, texto);

    free(texto);
    return 0;
}

void lerString(int n, minha_string* texto)
{
    int i, j;
    char str[51];
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%[^\n]s", &str);
        if(str[0] == '#')
        {
            texto[i].frase[0] = '.';
            for (j = 1; str[j] != '\0'; j++)
            {
                texto[i].frase[j] = str[j];
            }
            texto[i].frase[j] = '\0';
        }
        else if (str[0] == '/')
        {
            texto[i].frase[0] = ' ';
            for (j = 1; str[j] != '\0'; j++)
            {
                texto[i].frase[j] = str[j];
            }
            texto[i].frase[j] = '\0';
        }
    }   
}

void imprimeString(int n, minha_string* texto)
{
    system("cls");
    int i, cont = 1;
    for (i = 0; i < n; i++)
    {
        if (texto[i].frase[0] == '.')
        {
            printf("%d%s\n", cont, texto[i].frase);
            cont++;
        }
        else
            printf("*%s\n", texto[i].frase);        
    }
    
}
