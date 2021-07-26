#include <stdio.h>

int main()
{
    float Vetor[10] = {0};
    float *ptr = &Vetor;
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor na posicao %d tem endereco de %x\n", i, (ptr+i));
    }
    
    return 0;
}