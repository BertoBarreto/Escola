/********************************\
**    Nome: Idade + 30          **
**    Autor: Roberto Barreto    **
**    Data: 30/10/2020          **
\********************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float l1,l2,area;

    printf("Introduza os valores separados por espaco:");scanf("%f %f",&l1,&l2);

    //area de um quadrado/retangulo
    area=l1*l2;

    //um quadrado só é quadrdado se os seus lados forem todos iguais
    if(l1==l2)
        printf("A figura e um quadrado de %.2f de area",area);
    else
        printf("A figura e um retangulo de %.2f de area",area);
    
    

    return 0;
}
