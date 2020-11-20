/********************************\
**    Nome: Tipo de Triângulo   **
**    Autor: Roberto Barreto    **
**    Data: 01/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float l1,l2,l3;

    printf("Introduza os 3 valores: ");scanf("%f %f %f",&l1,&l2,&l3);

    if(l1<l2+l3 && l2<l1+l3 && l3<l1+l2)
        printf("O triangulo nao e valido");
    else if(l1==l2==l3)
        printf("O triangulo e equilatero");
    else if(l1!=l2!=l3)
        printf("O triangulo e escaleno");
    else
        printf("O triangulo e isosceles");
    

    return 0;
}
