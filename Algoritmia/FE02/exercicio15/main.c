/********************************\
**    Nome: Maquina             **
**    Autor: Roberto Barreto    **
**    Data: 01/10/2020          **
\********************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("Introduza a sua instrucao: ");scanf("%c",&letra);

    switch (letra)
    {
    case 'L': printf("Ligar");
        break;
    case 'D': printf("Desligar");
        break;
    case 'F': printf("Furar");
        break;
    default:  printf("Instrucao desconhecida");
        break;
    }

    return 0;
}