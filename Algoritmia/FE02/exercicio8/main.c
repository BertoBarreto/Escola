/********************************\
**    Nome: Positivo/Negativo   **
**    Autor: Roberto Barreto    **
**    Data: 30/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Introduza um numero: ");scanf("%d",&num);
    //verificar se o numero introduzido é 0, se for nao vai ser aceite, mas senao,
    // vamos verificar se o valor é positivo ou nao
    if(num==0){
        printf("O numero introduzio e 0");
    }else{
        if(num>0)
            printf("Numero %d e positivo",num);
        else
            printf("Numero %d e negativo",num);
    }

    return 0;
}
