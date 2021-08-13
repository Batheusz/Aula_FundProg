#include <stdio.h>

void procuraChar(FILE *, FILE *);

int main()
{
    char nome1[51], nome2[51];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%[^\n]s", &nome1);
    fflush(stdin);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%[^\n]s", &nome2);

    FILE *arq1, *arq2;
    arq1 = fopen(nome1, "r");
    arq2 = fopen(nome2, "r");

    if (arq1 != NULL)
        if (arq2 != NULL)
            procuraChar(arq1, arq2);

    return 0;
}

void procuraChar(FILE *arq1, FILE *arq2)
{
    int cont = 1;
    char letra = '0', procura = '0';
    while (letra != EOF)
    {
        letra = fgetc(arq1);

        if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z'))
        {
            while (procura != EOF)
            {
                procura = fgetc(arq2);
                if (letra == procura)
                {
                    printf("%d - %c\n", cont, letra);
                    rewind(arq2);
                    break;
                }
            }
        }

        if (procura == EOF)
        {
            procura = '0';
            rewind(arq2);// Volta o ponteiro do arq2 para o inicio
        }
        cont++;
    }
    
}