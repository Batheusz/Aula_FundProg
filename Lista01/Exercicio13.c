#include <stdio.h>
#define TAMANHO 10

int main()
{
    int a[TAMANHO] = {10, 2, 7, 8, 5, 3, 22, 17, 18, 6};
    int item = 0;
    printf("Digite seu item procurado: ");
    scanf("%d", &item);
    unsigned short int Encontrou = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        if(a[i] == item)
        { 
            Encontrou = 1;
            break;
        }
        else
            Encontrou = 0;
    }

    if(Encontrou)
        printf("Seu valor %d foi encontrado em ""a"".", item);
    else    
        printf("Seu valor %d nao foi encontrado em ""a"".", item);

    return 0;
}