#include <stdio.h>
#define M 3
#define N 3
#define TAM_DIAG 3

int main()
{
    int Matriz[M][N],
        DiagPrin[TAM_DIAG];
    int Soma = 0, PosDiag = 0;

    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            printf("Digite seu valor de M(%d,%d): ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
            if(i == j) // Elementos da diagonal principal
            {   
                DiagPrin[PosDiag] = Matriz[i][j];
                PosDiag++; // Salvar proximo elemento na proxima posição do vetor da diagonal
                Soma += Matriz[i][j];         
            }   
        }
    }

    printf("A diagonal principal de sua matriz eh: ");
    for (int i = 0; i < PosDiag; i++)
    {
        printf("%d ", DiagPrin[i]);
    }
    printf("\nE sua soma eh: %d\n", Soma);
    return 0;
}