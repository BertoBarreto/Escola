#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    int verifica,contador=0,contadorCap=0,contadorNCap=0;
    int nums[500];
    char escolha;
    char p[50];
    char _p[50];
    int capicuas[500];
    int Ncapicuas[500];

    
    do{
        printf("introduza um num");scanf("%d",&nums[contador]);
        //printf("%d",teste[contador]);
        
        printf("Deseja colocar outro numero?(S/N)");scanf(" %c",&escolha);
        contador++;
    }while(toupper(escolha)=='S');

    contador=0;
    while(nums[contador]!='\0')
    {
        printf("%d",nums[contador]);contador++;}
      /*  //guardar o valor dos numeros em dois vetores
        sprintf(p,"%d",nums[contador]);
        sprintf(_p,"%d",nums[contador]);
        //inverter um vetor
        strrev(_p);
        //comparar se os dois vetores são iguais
        verifica=strcmp(p,_p);
        //caso sejam iguais a maior capicua e este valor
        if(verifica==0){
            printf("%d",nums[contador]);
            capicuas[contadorCap]=nums[contador];
            contadorCap++;
        }else{
            Ncapicuas[contadorNCap]=nums[contador];
            contadorNCap++;
        }
        contador++;
    }
    while (capicuas[contadorCap]!='\0')
    {
        printf("\n\t%d",capicuas[contadorCap]);
        contadorCap++;
    }
    
    
     /*for(i=1;i<=prod+1;i++){
       
    }*/

}