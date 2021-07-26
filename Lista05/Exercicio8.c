#include <stdio.h>

void mostrarMaiuscula(char*);

int main()
{
    char Str[50] = "JuCA BaLA";
    mostrarMaiuscula(Str);
    
    return 0;
}

void mostrarMaiuscula(char *s)
{
    printf("Maiusculas: {");
    for (int i = 0; *(s+i) != '\0'; i++)
        if (*(s+i) >= 65 && *(s+i) <= 90)
            printf("%c,", *(s+i));
    printf("}\n");        
    
}