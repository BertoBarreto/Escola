 /********************************\
**    Nome: Idade dar Sangue    **
**    Autor: Roberto Barreto    **
**    Data: 30/10/2020          **
\********************************/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int idade;

    printf("Introduza a sua idade: ");scanf("%d",&idade);

    if(idade>=18 && idade<=67)
        printf("Tem idade para doar sangue");
    else
        printf("Nao tem idade para doar sangue");

    return 0;
}
