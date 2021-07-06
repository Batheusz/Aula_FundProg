#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int x;
    int y;
} Coordenada;

int main()
{
    Coordenada Ponto1, Ponto2;
    float Distancia = 0;
    printf("Digite seu primeiro ponto cartesiano X e Y: ");
    scanf("%d %d", &Ponto1.x, &Ponto1.y);
    printf("Digite seu segundo ponto cartesiano X e Y: ");
    scanf("%d %d", &Ponto2.x, &Ponto2.y);
    Distancia = pow(Ponto2.x - Ponto1.x, 2);
    Distancia += pow(Ponto2.y - Ponto1.y, 2);
    Distancia = sqrt(Distancia);
    printf("Distancia entre seus pontos eh: %.2f\n", Distancia);
    return 0;
}