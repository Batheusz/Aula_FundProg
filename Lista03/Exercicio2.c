#include <stdio.h>
typedef struct
{
    int x;
    int y;
} Coordenada;

int main()
{
    Coordenada Ponto;
    printf("Digite seu ponto cartesiano X e Y: ");
    scanf("%d %d", &Ponto.x, &Ponto.y);
    if (Ponto.x == 0 && Ponto.y != 0)
        printf("Sua coordenada esta no eixo y\n");
    else if (Ponto.x != 0 && Ponto.y == 0)
        printf("Sua coordenada esta no eixo x\n");
    else if (Ponto.x > 0 && Ponto.y > 0)
        printf("Sua coordenada esta no primeiro quadrante\n");
    else if (Ponto.x > 0 && Ponto.y < 0)
        printf("Sua coordenada esta no quarto quadrante\n");
    else if (Ponto.x < 0 && Ponto.y > 0)
        printf("Sua coordenada esta no segundo quadrante\n");
    else if (Ponto.x < 0 && Ponto.y < 0)
        printf("Sua coordenada esta no terceiro quadrante\n");
    else 
        printf("Sua coordenada esta na origem\n");  
    return 0;
}