/*********************************
**    Nome: Peso de pessoas     **
**    Autor: Roberto Barreto    **
**    Data: 21/11/2020          **
**********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int peso,contador=0,contadorP=0;
    char decisao;
    float media = 0.0f;

    while(1){
        printf("Introduza o peso da pessoa:");scanf("%d",&peso);
        if(peso<0){
            printf("Peso nao aceitável");
            break;
        }else if(peso>=50 && peso<=80)
            contadorP++;

        printf("Deseja continuar?(Y/N)");scanf(" %c",&decisao);
        if(decisao=='Y' || decisao=='y')
            contador++;
        else
            break;
    
    }    
    media=(float)contadorP/(float)contador;
    printf("Num total de %d pessoas, a media de pessoas com peso entre 50 e 80 kg e: %.2f",contador,media);
    return 0;
}
