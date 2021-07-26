#include <stdio.h>

void somaVetor(int*, int, int, int);

int main()
{   
    int vet[5][5] = {{1,2,3,4,5},
                     {5,4,3,2,1},
                     {1,2,3,2,1},
                     {5,4,3,4,5},
                     {1,1,1,1,1}};
    somaVetor(vet, 5, 0, 1);
    return 0;
}

void somaVetor(int* vet, int n, int x, int a)
{
    if(x < n*n)
    {
        if (*(vet+x) == a)
        {
            printf("Vet[%d][%d] = %d\n", x/n, x%n, *(vet+x));
        }
        x++;
        somaVetor(vet, n, x, a);        
    }

}
 