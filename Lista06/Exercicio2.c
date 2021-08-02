#include <stdio.h>

typedef struct 
{
  char codigo[10];
  char nome[101];
  int provas[3];  
}Aluno;


int main()
{
    printf("Estrutura tem o tamanho de %d Bytes\n", sizeof(Aluno));
    // 1 Byte a mais para fazer preenchimento da struct
    return 0;
}