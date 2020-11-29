/*********************************
**    Nome: Conversor Temp      **
**    Autor: Roberto Barreto    **
**    Data: 21/11/2020          **
**********************************/
#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int count=0;
    float tempC,tempK,MtempK=0,mTempK=0,media,totalTempsK;
    char escolha;
    char temp[100];
    char rel[500];
    while(1){
        printf("Introduza uma temperatura em celcius: ");scanf("%f",&tempK);
        //formula de kelvin para C
        tempC=tempK-273;
        //verificar se a temperatura é maior
        if(tempK>=MtempK)
            MtempK=tempK;
        //verificar se a temperatura é menor
        if(tempK<=mTempK || count==0)
            mTempK=tempK;
        
        //mostrar a temperatura escrita e o resultado
        printf("\nTemperatura: %.2f Kelvin -> %.2f Celcius",tempK,tempC);

        //colocar o resultado num vetor
        sprintf(temp,"** Temperatura: %.2f Kelvin -> %.2f Celcius    **\n",tempK,tempC);
        //adicionar o vetor do resultado a um relatório
        strcat(rel,temp);
        count++;

        totalTempsK+=tempK;

        printf("\nDeseja sair?(Y/N)");scanf(" %c",&escolha);
        if(escolha=='Y'||escolha=='y')
            break;

    }
    media=totalTempsK/count;
    printf("*****************************************************\n");
    printf("**\t\tRelatorio         \t\t   **\n");
    printf("%s*****************************************************",rel);
    printf("\n*****************************************************");
    printf("\n** Maior temperatura em kelvin foi: %3.2f \t   **",MtempK);
    printf("\n** Menor temperatura em kelvin foi: %3.2f \t   **",mTempK);
    printf("\n** Media de temperaturas em kelvin e: %3.2f \t   **",media);
    printf("\n*****************************************************");

    return 0;
}
