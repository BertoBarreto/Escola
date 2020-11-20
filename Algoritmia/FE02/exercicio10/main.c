#include<stdio.h>

int main(int argc, char const *argv[])
{
    float preco,precoF;

    printf("Introduza o preco: ");scanf("%f",&preco);

    if(preco>=100)
        precoF=preco+(preco*0.2);
    else
        precoF=preco+(preco*0.1);
    
    printf("O preco final e %.2f euros",precoF);

    return 0;
}
