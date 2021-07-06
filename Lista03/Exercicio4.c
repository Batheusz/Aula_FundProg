#include <stdio.h>
struct rgAluno
{
    char Nome[35];
    float Nota;
};

int main()
{
    int n, i, Acima = 0, Abaixo = 0;
    float Soma = 0, Media;
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&n);
    struct rgAluno Aluno[n];
    for (i = 0; i < n; i++)
    {
        printf("Nome do aluno %d: ", i+1);
        fflush(stdin);
        scanf("%[^\n]s", &Aluno[i].Nome);
        fflush(stdin);
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &Aluno[i].Nota);
        Soma += Aluno[i].Nota;
    }
    system("cls");
    Media = Soma / n;
    printf("Media da turma: %.2f\n", Media);
    for (i = 0; i < n; i++)
    {
        if (Aluno[i].Nota >= Media)
            Acima++;
        else
            Abaixo++;
    }
    printf("Alunos acima da media: %d\n", Acima);
    printf("Alunos abaixo da media: %d\n", Abaixo);

    return 0;
}