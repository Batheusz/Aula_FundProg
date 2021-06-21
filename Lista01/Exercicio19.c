#include <stdio.h>
#define M 3
#define N 3

int main()
{
    int Matriz[M][N];
    int Soma = 0;
    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            printf("Digite seu valor de M(%d,%d): ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
            Soma += Matriz[i][j];         
        }
    }
    printf("A soma de todos elementos de sua matriz eh: %d\n", Soma);
    return 0;
}