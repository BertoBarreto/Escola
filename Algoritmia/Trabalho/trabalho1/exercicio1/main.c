/************************************************\
**    Nome: Trabalho de grupo ex1               **
**    Autor: Vicent Rebena - Roberto Barreto    **
**    Data: 1/11/2020                           **
\************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p1, p2, p3, p4, p5, _p1, _p2, _p3, _p4, _p5, total;
    float media;

    printf("Paquete 1 ? ");
    scanf("%d",&p1);

    printf("Paquete 2 ? ");
    scanf("%d",&p2);

    printf("Paquete 3 ? ");
    scanf("%d",&p3);

    printf("Paquete 4 ? ");
    scanf("%d",&p4);

    printf("Paquete 5 ? ");
    scanf("%d",&p5);

    if (p1 > 4)
    {
        _p1 = p1;
    } 
    else
    {
        _p1 = 0;
    }

    if (p2 > 4)
    {
        _p2 = p2;
    } 
    else
    {
        _p2 = 0;
    }

    if (p3 > 4)
    {
        _p3 = p3;
    } 
    else
    {
        _p3 = 0;
    }

    if (p4 > 4)
    {
        _p4 = p4;
    } 
    else
    {
        _p4 = 0;
    }

    if (p5 > 4)
    {
        _p5 = p5;
    } 
    else
    {
        _p5 = 0;
    }


    media = (p1 + p2 + p3 + p4 + p5)/5;
    total = _p1 + _p2 + _p3 + _p4 + _p5;

    printf("A media e %.2f\n A soma e %d", media,total );
    return 0;
} 