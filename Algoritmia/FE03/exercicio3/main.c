#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int count=0;
    float tempC,tempK,tempK_1=0,MtempK,mTempK,media,totalTempsK;
    char escolha;
    char temp[100];
    char rel[500];
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
        sprintf(temp,"Temperatura: %.2f Kelvin -> %.2f Celcius",tempK,tempC);
        strcat(rel,temp);
        count++;

        totalTempsK+=tempK;

        printf("\nDeseja sair?(Y/N)");scanf(" %c",&escolha);
        if(escolha=='Y'||escolha=='y')
            break;

        tempK_1=tempK;
    }
    media=totalTempsK/count;
    printf("**************************************************\n");
    printf("**\t\tRelatorio         \t\t**\n");
    printf("** %s **",rel);
    printf("\n**************************************************");
    printf("\n** Maior temperatura em kelvin foi: %.2f \t**",MtempK);
    printf("\n** Menor temperatura em kelvin foi: %.2f \t**",mTempK);
    printf("\n** Media de temperaturas em kelvin e: %.2f \t**",media);
    printf("\n**************************************************");

    return 0;
}
