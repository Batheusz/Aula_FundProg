#include <stdio.h>
#define M 5
#define N 5

int main()
{
    int Matriz[M][N];

    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            if(i < j)
                Matriz[i][j] = 2;
            else if(i > j)
                Matriz[i][j] = 1;
            else
                Matriz[i][j] = 0;
        }
    }
    
    system("cls");

    // Imprimir a matriz
    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}