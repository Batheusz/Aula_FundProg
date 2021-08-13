#include <stdio.h>

float calcularCompra(char*);

int main()
{
    printf("Total: %.2f", calcularCompra("exercicio4.txt"));
    return 0;
}

float calcularCompra(char* nomeArquivo)
{
    int quantidade;
    float preco, compra = 0;
    char item[100];
    FILE *arq = fopen(nomeArquivo, "r");
    
    if(arq == NULL)
    {
        printf("Impossivel abrir arquivo.\n");
        return 0;
    }
    else
    {
        while (fscanf(arq, "%s %d %f", &item, &quantidade, &preco) != EOF)
        {
            compra += (quantidade * preco);
        }
    }

    fclose(arq);
    return compra;
}
