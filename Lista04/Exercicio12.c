#include <stdio.h>

void DiagPrin(int [], int);

int main()
{
    int A[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    DiagPrin(A,3);
    return 0;
}

void DiagPrin(int Vet[], int coluna)
{
    /*
        Podemos pegar os elementos da diagonal principal o valor da posição em
        linha e coluna devem ser o mesmo, se usarmos a definição bidimensional,
        mas considerando que uma matriz é um espaço linear da memória
        de tamanho linha*coluna.
        Os seus elementos da diagonal principal sempre estaram afastados entre si
        pelo numero de elementos em uma linha + x, sendo que  1 >= x < nº colunas
    */
   printf("Diagonal principal = { ");
   for (int i = 0; i < coluna; i++)
        printf("%d, ", Vet[(coluna*i)+i]);
   printf("}\n");
}