/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 11/12/2020			**
**********************************/

#include <stdio.h>

void triangulo()
{
    int base = 3 + 2; //n+2
    for (int i = 1; i <= 3; i++)
    {

        for (int a = 1; a <= base; a + 2)
        {
            if (i == 1)
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