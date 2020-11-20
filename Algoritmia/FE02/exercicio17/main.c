/********************************\
**    Nome: Calculo de KW       **
**    Autor: Roberto Barreto    **
**    Data: 01/10/2020          **
\********************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float Kw,total,iva=0.23f;
    int tipo;
    printf("Introduza a quantidade de Kw que consumiu: ");scanf("%f",&Kw);

    printf("Selecione a sua opcao:");
    printf("\n**********************************");
    printf("\n** 1-Particular(Continente)\t**");
    printf("\n** 2-Particular(Ilhas)\t \t**");
    printf("\n** 3-Pequena Empresa\t \t**");
    printf("\n** 4-Media/Grande Empresa\t**");
    printf("\n** 5-Estado e organismo publico\t**");
    printf("\n**********************************");
    printf("\nOpcao: ");scanf("%d",&tipo);

    switch (tipo)
    {
        case 1:
                total=0.1865*Kw;
            break;
        case 2:
                total=0.1875*Kw;
            break;
        case 3:
                total=0.1754*Kw;
            break;
        case 4:
                total=0.1592*Kw;
            break;
        case 5:
                total=0.1311*Kw;
            break;
        default:
                printf("\n erro");
                total=0;
            break;
    }

    total+=total*iva;
    
    printf("O total a pagar e %.2f euros com iva incluido",total);

    return 0;
}