/*********************************
**    Nome: imprimeNumeros      **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/

#include <stdio.h>

void imprimeNumeros(int numero);

void imprimeNumeros(int numero)
{
    int contador = 1;
    while (contador <= numero)
    {
        printf("%d ", contador);
        contador++;
    }
}

void main()
{

    int num;

    printf("Introduza um numero: ");
    scanf("%d", &num);
    imprimeNumeros(num);
}