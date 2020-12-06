/*********************************
**    Nome: Desenhar Triangulo  **
**    Autor: Roberto Barreto    **
**    Data: 21/11/2020          **
**********************************/

#include <stdio.h>

void main()
{
    int altura;
    char carater;

    printf("Introduza a altura do triangulo: ");
    scanf("%d", &altura);
    printf("Introduza o carater para preencher: ");
    scanf(" %c", &carater);

    for (int i = 1; i <= altura; i++)
    {

        for (int a = 1; a <= i; a++)
        {
            printf(" %c", carater);
        }
        printf("\n");
    }
}