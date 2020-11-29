/*********************************
**    Nome: imprimeNumeros      **
**    Autor: Roberto Barreto    **
**    Data: 28/11/2020          **
**********************************/
#include<stdio.h>
#include<string.h>

float convKelv_C(int kelvin);
float convCel_K(int celcius);

float kelvinToCelcius(int temp){
    return temp-273;
}
float celsiusToKelvin(int temp){
    return temp + 273;
}

void main(){

    int escolhaM, count=0;
    float temp,tempC,tempK,MtempK=0,mTempK=0,MtempC=0,mTempC=0,mediaK,mediaC,totalTempsK=0,totalTempsC=0;
    char escolha;
    char temperaturas[100];
    char rel[500];

    while(1){
        printf("\n**********************************");
        printf("\n** Menu \t\t\t**");
        printf("\n** 1-kelvin para celcius \t**");
        printf("\n** 2-Celcius para kelvin \t**"); 
        printf("\n**********************************");  
        printf("\n Escolha: ");scanf("%d",&escolhaM);

        printf("\nIntroduza a temperatura: ");scanf("%f",&temp);

        switch (escolhaM)
        {
            case 1:
                    tempC=kelvinToCelcius(temp);
                    //verificar se a temperatura é maior
                    if(temp>=MtempK)
                        MtempK=temp;
                    //verificar se a temperatura é menor
                    if(temp<=mTempK || count==0)
                        mTempK=temp;
                    
                    //mostrar a temperatura escrita e o resultado
                    printf("\nTemperatura: %.2f Kelvin -> %.2f Celcius",temp,tempC);

                    //colocar o resultado num vetor
                    sprintf(temperaturas,"** Temperatura: %.2f Kelvin -> %.2f Celcius    **\n",temp,tempC);
                    //adicionar o vetor do resultado a um relatório
                    strcat(rel,temperaturas);
                    count++;

                    totalTempsK+=temp;
                break;
            case 2:
                     tempK=celsiusToKelvin(temp);
                    //verificar se a temperatura é maior
                    if(temp>=MtempC)
                        MtempC=temp;
                    //verificar se a temperatura é menor
                    if(temp<=mTempC || count==0)
                        mTempC=temp;
                    
                    //mostrar a temperatura escrita e o resultado
                    printf("\nTemperatura: %.2f Celcius -> %.2f Kelvin",temp,tempK);

                    //colocar o resultado num vetor
                    sprintf(temperaturas,"** Temperatura: %.2f Celcius -> %.2f Kelvin    **\n",temp,tempK);
                    //adicionar o vetor do resultado a um relatório
                    strcat(rel,temperaturas);
                    count++;

                    totalTempsC+=temp;
                break;
            default: printf("Erro");
                break;
        }

        printf("\nDeseja sair?(Y/N)");scanf(" %c",&escolha);
        if(escolha=='Y'||escolha=='y')
            break;

    }
    mediaK=totalTempsK/count;
    mediaC=totalTempsC/count;

    printf("*****************************************************\n");
    printf("**\t\tRelatorio         \t\t   **\n");
    printf("%s*****************************************************",rel);
    printf("\n*****************************************************");
    printf("\n** Maior temperatura em Kelvin foi: %3.2f \t   **",MtempK);
    printf("\n** Menor temperatura em Kelvin foi: %3.2f \t   **",mTempK);
    printf("\n** Media de temperaturas em Kelvin e: %3.2f \t   **",mediaK);
    printf("\n*****************************************************");
    printf("\n*****************************************************");
    printf("\n** Maior temperatura em Celcius foi: %3.2f \t   **",MtempC);
    printf("\n** Menor temperatura em Celcius foi: %3.2f \t   **",mTempC);
    printf("\n** Media de temperaturas em Celcius e: %3.2f \t   **",mediaC);
    printf("\n*****************************************************");

}