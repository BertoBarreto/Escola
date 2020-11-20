/********************************\
**    Nome: Preco com desconto  **
**    Autor: Roberto Barreto    **
**    Data: 23/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float preco,precoFinal;
    //introdução do preco da peça de roupa
    printf("introduza o preco da peca: ");
    scanf("%f",&preco);

    //calculo do preço final que é 30% de desconto de uma roupa
    precoFinal=preco-(preco*0.3);

    //amostra ao utilizador do preço final da peça
    printf("o preco final da peca e %.2f euros", precoFinal);

    return 0;
}
