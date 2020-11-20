/********************************\
**    Nome: Area do circulo     **
**    Autor: Roberto Barreto    **
**    Data: 24/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float r, area, pi=3.14159;

    //ir buscar o raio do circulo
    printf("introduza o raio do circulo: ");
    scanf("%f", &r);

    //formula da area do circulo
    area=pi*(r*r);

    //apresentação da area para o utilizador
    printf("A area do circulo e: %f", area);

    return 0;
}
