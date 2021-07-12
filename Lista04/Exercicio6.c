#include <stdio.h>

float PesoIdeal(float, char);


int main()
{
    float alt;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%f", &alt);
    printf("Digite seu sexo (M ou F): ");
    fflush(stdin);
    scanf("%c", &sexo);
    printf("Seu peso ideal eh: %.2f Kg\n", PesoIdeal(alt, sexo));
}

float PesoIdeal(float alt, char sexo)
{
    if (sexo == 'M')
        return 72.7*alt - 58;
    else if(sexo == 'F')  
        return 62.1*alt - 44.7; 
    else
        return 0;     
}
