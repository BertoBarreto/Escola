/*********************************
**    Nome: potencia            **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/
#include <stdio.h>

int potencia(int num, int expoente);

int potencia(int num, int expoente)
{
    int resultado = 1;
    for (int i = 1; i <= expoente; i++)
    {
        resultado *= num;
    }
    return resultado;
}

void main()
{

    int num, exp;

    printf("Introduza o numero e o expoente: ");
    scanf("%d %d", &num, &exp);
    printf("Resultado da potencia e: %d", potencia(num, exp));
}