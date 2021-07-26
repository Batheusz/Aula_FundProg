#include <stdio.h>

int main()
{
    int x, y;
    int *ptrx, *ptry;

    ptrx = &x;
    ptry = &y;

    printf("Endereco de x: %x\n", &x);
    printf("Endereco de y: %x\n", &y);

    if (ptrx > ptry)
        printf("O maior endereco eh de x, sendo: %x", ptrx);
    else if (ptrx < ptry)
        printf("O maior endereco eh de y, sendo: %x", ptry);

    return 0;
}