#include <stdio.h>


int main()
{   
    int a;
    int *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;

    printf("Digite seu valor: ");
    scanf("%d", &a);

    printf("Seu valor eh....: %d\n", a);
    *b *= 2;
    printf("Seu dobro eh....: %d\n", a);
    **c *= 1.5;
    printf("Seu triplo eh...: %d\n", a);
    ***d = (***d/3) * 4;
    printf("Seu quadruplo eh: %d\n", a);

    return 0;
}

 