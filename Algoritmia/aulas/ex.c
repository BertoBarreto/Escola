/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 16/12/2020			**
**********************************/

#include <stdio.h>
#include <string.h>
void puts(char *ptr)
{
    for (int i = 0; ptr[i] != '\0'; i++)
        printf("%c", ptr[i]);
}
void main()
{
    char cartucho[5];
    strcpy(cartucho, "Ola");

    puts(cartucho);
}