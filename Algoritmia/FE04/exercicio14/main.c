#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int inverter(int num)
{

    char _n[50];

    sprintf(_n, "%d", num);

    strrev(_n);

    return atoi(_n);
}

void main()
{

    int num;

    printf("Introduza um numero: ");
    scanf("%d", &num);

    printf("Invertido: %d", inverter(num));
}