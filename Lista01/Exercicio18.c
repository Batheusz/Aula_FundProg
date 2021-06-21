#include <stdio.h>
#define M 4
#define N 4

int main()
{
    int Matriz[M][N];
    int Negativo = 0;
    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            printf("Digite seu valor de M(%d,%d): ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
            if (Matriz[i][j] < 0) // Verifica a existencia de negativos e aumenta o contador
                Negativo++;            
        }
    }
    printf("Sua matriz possui %d numero(s) negativo(s).\n", Negativo);
    return 0;
}