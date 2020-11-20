/********************************\
**    Nome: Area de triângulo   **
**    Autor: Roberto Barreto    **
**    Data: 24/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float base,altura,area;

    //bas e altura do triangulo
    printf("introduza a base do triangulo: ");
    scanf("%f", &base);

    printf("introduza a altura do triangulo: ");
    scanf("%f", &altura);

    //calculo da area de um triangulo
    area=(base*altura)/2;

    //apresentação da area para o utilizador
    printf("A area do triangulo e: %.2f", area);

    return 0;
}
