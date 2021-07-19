#include <stdio.h>

typedef struct 
{
    float media;
    float maior;
    float dif;
}Numeros;

Numeros RetornoCalculos(float, float, float);

int main()
{
    Numeros Valores = RetornoCalculos(1,2,3);
    printf("Media: %.2f\n", Valores.media);
    printf("Maior: %.2f\n", Valores.maior);
    printf("Dif..: %.2f\n", Valores.dif);
    return 0;
}

Numeros RetornoCalculos(float x, float y, float z)
{
    Numeros Valores;
    Valores.media = (x+y+z)/3;

    if (x > y && x > z)
        Valores.maior = x;
    else if(y > z) // X é menor q y e z, então so tenho que analisar y e z
        Valores.maior = y;
    else
        Valores.maior = z;

    if (Valores.media > Valores.maior)
        Valores.dif = Valores.media - Valores.maior;
    else            
        Valores.dif = Valores.maior - Valores.media;    

    return Valores;  
}
