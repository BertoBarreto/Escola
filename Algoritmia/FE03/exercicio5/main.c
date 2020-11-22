#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    int verifica,contador=0,contadorCap=0,contadorNCap=0;
    int nums[500],capicuas[500],Ncapicuas[500];
    char escolha, p[50], _p[50];

    for(int i=0;i<500;i++){
        nums[i]=0;
        capicuas[i]=0;
        Ncapicuas[i]=0;
    }

    do{
        printf("Introduza um numero: ");scanf("%d",&nums[contador]);
        
        printf("Deseja colocar outro numero?(S/N)");scanf(" %c",&escolha);
        contador++;
    }while(toupper(escolha)=='S');

    contador=0;
    while(nums[contador]!='\0')
    {
        //guardar o valor dos numeros em dois vetores
        sprintf(p,"%d",nums[contador]);
        sprintf(_p,"%d",nums[contador]);
        //inverter um vetor
        strrev(_p);
        //comparar se os dois vetores são iguais
        verifica=strcmp(p,_p);
        //caso sejam iguais a maior capicua e este valor
        if(verifica==0){
            capicuas[contadorCap]=nums[contador];
            contadorCap++;
        }else{
            Ncapicuas[contadorNCap]=nums[contador];
            contadorNCap++;
        }
        contador++;
    }

        printf("\n**************************");
        printf("\n** Capicuas(%3d): \t**",contadorCap);
        printf("\n**************************");
    if(contadorCap>0){
        contadorCap=0;
        while (capicuas[contadorCap]!='\0')
        {
            printf("\n** \t%d\t\t**",capicuas[contadorCap]);
            contadorCap++;
        }
        printf("\n**************************");
    }
    
        
        printf("\n**************************");
        printf("\n** Nao Capicuas(%3d):   **",contadorNCap);
        printf("\n**************************");
    if(contadorNCap>0){
        contadorNCap=0;
        while (Ncapicuas[contadorNCap]!='\0')
        {
            printf("\n**\t%d\t\t**",Ncapicuas[contadorNCap]);
            contadorNCap++;
        }
        printf("\n**************************");
    }

}
      