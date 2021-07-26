#include <stdio.h>

void mostraVetor(int*, int, int);

int main()
{   
    int vet[5] = {1,2,3,4,5};
    printf("{ ");
    mostraVetor(vet, 5, 0);
    printf("}\n");
    return 0;
}

void mostraVetor(int* vet, int n, int x)
{
    if(x < n)
    {
        printf("%d ", *(vet+x));
        x++;
        mostraVetor(vet, n, x);
    }
    
}
 