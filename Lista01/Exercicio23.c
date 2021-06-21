#include <stdio.h>
#define M 3
#define N 3

int main()
{
    int Matriz[M][N];
    unsigned short int Identidade = 0;

    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            printf("Digite seu valor de M(%d,%d): ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
            if (i==j)
            {
                if (Matriz[i][j] == 1) // Se a diagonal principal é unitária
                    Identidade++;             
            }
            else
            {
                if (Matriz[i][j] == 0) // Se os outros elementos são zero
                    Identidade++;
            }            
        }
    }
    system("cls");

    if(Identidade == M*N) // Se tudo deu certo meu contador deve ter o mesmo numero que a quantidade de elementos da matriz
        printf("Sua matriz eh identidade\n");
    else
        printf("Sua matriz nao eh identidade\n");
    
    return 0;
}