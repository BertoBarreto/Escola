/*********************************
**    Nome: Exemplo nome		**
**    Autor: Roberto Barreto	**
**    Data: 16/12/2020			**
**********************************/

#include <stdio.h>
void funcExtenso(int num)
{
    int divisao = num / 10;
    int resto = num % 10;
    if (divisao < 1)
    {
        switch (resto)
        {
        case 1:
            printf("um euro");
            break;
        case 2:
            printf("dois euros");
            break;
        case 3:
            printf("tres euros");
            break;
        case 4:
            printf("quatro euros");
            break;
        case 5:
            printf("cinco euros");
            break;
        case 6:
            printf("seis euros");
            break;
        case 7:
            printf("sete euros");
            break;
        case 8:
            printf("oito euros");
            break;
        case 9:
            printf("nove euros");
            break;
        }
    }
    else if (divisao >= 1 && divisao < 2)
    {
        switch (num)
        {
        case 10:
            printf("dez euros");
            break;
        case 11:
            printf("onze euros");
            break;
        case 12:
            printf("doze euros");
            break;
        case 13:
            printf("treze euros");
            break;
        case 14:
            printf("quatorze euros");
            break;
        case 15:
            printf("quinze euros");
            break;
        case 16:
            printf("dezasseis euros");
            break;
        case 17:
            printf("dezassete euros");
            break;
        case 18:
            printf("dezoito euros");
            break;
        case 19:
            printf("dezanove euros");
            break;
        }
    }
    else

    {
        switch (divisao)

        {
        case 2:
            printf("vinte e ");
            break;
        case 3:
            printf("trinta e ");
            break;
        case 4:
            printf("quarenta e ");
            break;
        case 5:
            printf("cincoente e ");
            break;
        }
        switch (resto)

        {
        case 1:
            printf("um euro");
            break;
        case 2:
            printf("dois euros");
            break;
        case 3:
            printf("tres euros");
            break;
        case 4:
            printf("quatro euros");
            break;
        case 5:
            printf("cinco euros");
            break;
        case 6:
            printf("seis euros");
            break;
        case 7:
            printf("sete euros");
            break;
        case 8:
            printf("oito euros");
            break;
        case 9:
            printf("nove euros");
            break;
        }
    }
}
void main()
{
    funcExtenso(21);
}