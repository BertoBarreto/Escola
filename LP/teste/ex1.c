/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

void triangulo()
{
    for (int i = 1; i <= 3; i++)
    {

        for (int a = 1; a <= 5; a + 2)
        {
            if (a % 2 != 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void main()
{
    triangulo();
}