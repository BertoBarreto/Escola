#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void capicua(int num);

void capicua(int num)
{

    char n[50];
    char _n[50];
    int verifica;

    sprintf(_n, "%d", num);
    sprintf(n, "%d", num);

    strrev(_n);
    verifica = strcmp(n, _n);

    if (verifica == 0)
    {
        printf("O numero e capicua");
    }
    else
    {
        printf("O numero nao e capicua");
    }
}

void main()
{

    int num;

    printf("Introduza um numero: ");
    scanf("%d", &num);

    capicua(num);
}