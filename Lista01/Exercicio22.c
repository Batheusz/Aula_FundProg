#include <stdio.h>
#define M 10
#define N 2

int main()
{
    float Matriz[M][N];
    float SomaAluno = 0, SomaProva = 0;

    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            printf("Digite seu valor %d do aluno %d: ", j+1, i+1);
            scanf("%f", &Matriz[i][j]);
        }
    }
    system("cls");

    for (int i = 0; i < M; i++)
    {   
        for (int j = 0; j < N; j++)
        {
            SomaAluno += Matriz[i][j];
        }
        printf("Media aluno %d: %.1f\n", i+1, SomaAluno/N);
        SomaAluno = 0;
        
    }

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            SomaProva += Matriz[i][j];
        }
        printf("Media %d prova: %.1f\n", j+1, SomaProva/M);
        SomaProva = 0;
    }
    
    return 0;
}