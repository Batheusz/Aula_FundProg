#include <stdio.h>

void troca(int*, int*);

int main()
{
    int A = 3, B = 5;
    printf("A: %d B: %d\n", A, B);
    troca(&A,&B);
    printf("A: %d B: %d", A, B);
    return 0;
}

void troca(int* A, int* B)
{
    int aux = *B;
    *B = *A;
    *A = aux;
}
