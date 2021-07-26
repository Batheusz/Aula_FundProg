#include <stdio.h>

int main()
{
    float Vetor[3][3] = {0};
    float *ptr = &Vetor;
    int ln, cl;
    for (int i = 0; i < 9; i++)
    {
        ln = i/3;
        cl = i % 3;
        printf("Vetor na posicao [%d][%d] tem endereco de %x\n", ln, cl, (ptr+i));
    }
    
    return 0;
}