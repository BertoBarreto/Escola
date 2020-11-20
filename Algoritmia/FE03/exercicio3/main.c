#include<stdio.h>

int main(int argc, char const *argv[])
{
    int count=0;
    float tempC,tempK,tempK_1=0,MtempK,mTempK,media,totalTempsK;
    char escolha;
    while(1){
        printf("Introduza uma temperatura em celcius: ");scanf("%f",&tempK);
        tempC=tempK-273;

        if(tempK_1==0)
            tempK_1=tempK;

        if(tempK>=tempK_1)
            MtempK=tempK;

        if(tempK<=tempK_1)
            mTempK=tempK;
        
        printf("tempK_1: %.2f",tempK_1);
        printf("\nTemperatura: %.2f Kelvin -> %.2f Celcius",tempK,tempC);
        count++;

        totalTempsK+=tempK;

        printf("\nDeseja sair?(Y/N)");scanf(" %c",&escolha);
        if(escolha=='Y'||escolha=='y')
            break;

        tempK_1=tempK;
    }

    media=totalTempsK/count;

    printf("\nMaior temperatura em kelvin foi: %.2f",MtempK);
    printf("\nMenor temperatura em kelvin foi: %.2f",mTempK);
    printf("\nMedia de temperaturas em kelvin e: %.2f",media);

    return 0;
}
