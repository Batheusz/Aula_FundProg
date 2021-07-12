#include <stdio.h>

char ParaMaiusculo(char);
char ParaMinusculo(char);

int main()
{
  char letra1 = 'b', letra2 = 'C';
  printf("Funcao maiuscula: %c | %c\n", ParaMaiusculo(letra1), ParaMaiusculo(letra2));
  printf("Funcao minuscula: %c | %c\n", ParaMinusculo(letra1), ParaMinusculo(letra2));

}
char ParaMaiusculo(char caracter)
{
    if (caracter >= 'A' && caracter <= 'Z')
        return caracter;
    else if (caracter >= 'a' && caracter <= 'z')
        return caracter - 32;        
}

char ParaMinusculo(char caracter)
{
    if (caracter >= 'A' && caracter <= 'Z')
        return caracter + 32;
    else if (caracter >= 'a' && caracter <= 'z')
        return caracter;        
}

