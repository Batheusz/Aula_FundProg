#include <stdio.h>
#define TAMANHO 10

int main()
{
    int Vetor[TAMANHO] = {0};
    int Menor = 0, Maior = 0; 
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite seu valor %d: ", i+1);
        scanf("%d",&Vetor[i]);
    }   
    
    // Defino o primeiro elemento como o maior
    Menor = Vetor[0];
    Maior = Vetor[0]; 

    // Irei percorrer o vetor e analisar se os elementos sao maiores ou menores
    for (int i = 0; i < TAMANHO; i++)
    {
        if (Vetor[i] > Maior) // Se meu numero atual e maior que variavel Maior
            Maior = Vetor[i]; // Salvar ele na variavel Maior
        if (Vetor[i] < Menor) // Se meu numero atual e menor que variavel Menor
            Menor = Vetor[i]; //Salvar ele na variavel Menor
    }  
    printf("Seu maior valor eh: %d\nSeu menor valor eh: %d\n", Maior, Menor);
    return 0;
}