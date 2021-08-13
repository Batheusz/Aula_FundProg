#include <stdio.h>

int main() {
  char nome1[100], nome2[100], linha[200];

    printf("Nome do Arquivo1: ");
    scanf("%[^\n]s", &nome1);
    fflush(stdin);
    printf("Nome do Arquivo2: ");
    scanf("%[^\n]s", &nome2); 

    FILE *arquivo1, *arquivo2, *arquivoresult;
    arquivo1 = fopen(nome1, "r");
    arquivo2 = fopen(nome2, "r");
    arquivoresult = fopen("exercicio2_3.txt", "a");

    if (arquivo1 == NULL) 
    {
        printf("Primeiro arquivo nao foi localizado.\n");
        return(0);
    }
    else
    {
        if (arquivo2 == NULL) 
        {
            printf("Segundo arquivo nao foi localizado.\n");
            return(0);
        }
        else
        {
            if (arquivoresult == NULL)
            {
                printf("Impossivel criar arquivo de junção.\n");
                return(0);
            }
            else
            {
                while (fgets(linha, 200, arquivo1) != NULL)
                {
                    printf("%s\n", linha);
                    fputs(linha, arquivoresult);
                }
                fputs("\n", arquivoresult);
                while (fgets(linha, 200, arquivo2) != NULL)
                {
                    printf("%s\n", linha);
                    fputs(linha, arquivoresult);
                }
            }
        }
    }


  fclose(arquivo1);
  fclose(arquivo2);
  fclose(arquivoresult);

  return(0);
}
