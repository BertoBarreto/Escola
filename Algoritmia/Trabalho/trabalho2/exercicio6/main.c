/************************************************\
**    Nome: Trabalho de grupo 2                 **
**    Autor: Vicent Rebena - Roberto Barreto    **
**    Data: 15/11/2020                          **
\************************************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int idade, limiteInf=15,limiteSup=48,contador=0,contadorP=0;
    char escolha;

    while(1){
        printf("Indique a sua idade: ");scanf("%d",&idade);

        if(idade<0){
            printf("Idade colocada incorreta");
            break;
        }
        //[15;48[
        if((idade>=limiteInf)&&(idade<limiteSup)){
            contadorP++;
        }

        contador++;

        printf("Deseja indicar outra idade?(Y/N)");scanf(" %c",&escolha);
        if((escolha!='S')||(escolha!='s')){
            break;
        }
    }  

    printf("Dados recolhidos:");
    printf("\n\tQuantidade de pessoas entre os 15 e 48 anos: %d",contadorP);

    return 0;
}
