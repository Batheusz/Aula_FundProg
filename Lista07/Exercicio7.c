#include <stdio.h>

void tabuada(int, FILE *);

int main()
{
    FILE *arq = fopen("exercicio7.txt", "a");
    int num = 0;

    while (num < 1 || num > 10)
    {   
        printf("Digite seu numero [1,10]: ");
        scanf("%d", &num);
    }
    tabuada(num, arq);

    fclose(arq);
    return 0;
}

void tabuada(int num, FILE *arq)
{
    fprintf(arq, "--TABUADA DO %d--\n", num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(arq, "| %d X %2d = %3d |\n", num, i, num*i);
    }
    fprintf(arq, "----------------\n\n", num);
}