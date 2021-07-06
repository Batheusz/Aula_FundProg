#include <stdio.h>

typedef struct
{
    int Inicio;
    int Fim;
    int Razao;
}Progressao;

int main()
{
    int n, i, j = 1;
    Progressao PA;
    scanf("%d", &n);
    while (j <= n)
    {   
        printf("%do. caso: ", j);
        scanf("%d %d %d", &PA.Inicio, &PA.Fim, &PA.Razao);
        int Soma = 0;
        for (i = PA.Inicio; i <= PA.Fim; i += PA.Razao)
        {
            printf("%d, ", i);
            Soma += i;
        }
        printf("soma = %d\n", Soma);  
        j++;      
    }
    printf("Fim do programa!!!\n");
    return 0;
}