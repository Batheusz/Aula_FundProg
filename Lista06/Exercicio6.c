#include <stdio.h>

void ler(int*, int);
void mostrar(int*, int);
void concatenar(int*, int*, int*, int);


int main()
{
    int tam;
    int* vet1, vet2, result;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet1 = (int*) malloc(tam*sizeof(int));
    vet2 = (int*) malloc(tam*sizeof(int));
    result = (int*) malloc(2*tam*sizeof(int));


    ler(vet1, tam);
    ler(vet2, tam);
    concatenar(vet1, vet2, result, tam);
    mostrar(result, 2*tam);

    free(vet1);
    free(vet2);
    free(result);

    return 0;
}

void ler(int* x, int tam)
{
    for(int i = 0; i < tam; i++)
        scanf("%d", &x[i]);
}

void mostrar(int* x, int tam)
{
    for(int i = 0; i < tam; i++)
        printf("%d ", x[i]);
    printf("\n");
}

void concatenar(int* x, int* y, int* result, int tam)
{
    for (int i = 0, j = 0; i < 2*tam; i++)
    {
        if(i < tam)
            result[i] = x[i];
        else   
        { 
            result[i] = y[j];
            j++;
        }
    }
}
