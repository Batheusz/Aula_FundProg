#include <stdio.h>

int somaVetor(int*, int, int);

int main()
{   
    int vet[5] = {5,5,5,5,5};
    printf("Soma = %d\n", somaVetor(vet, 5, 0));
    return 0;
}

int somaVetor(int* vet, int n, int x)
{
    int soma = 0;
    if(x < n)
    {
        soma += *(vet+x);
        x++;
        soma += somaVetor(vet, n, x);
    }

    return soma;
}
 