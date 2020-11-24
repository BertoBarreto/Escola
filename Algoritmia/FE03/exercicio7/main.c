#include<stdio.h>
#include <stdlib.h> 
#include <ctype.h>
#include <time.h> 

void main(){
    int i=0,num,Min=1,Max=100,escolha,resposta,contador=1,tentativas=0; 
    
    srand(time(0));

    printf("**********************************");
    printf("\n** Menu:\t\t\t**");
    printf("\n**\t1-Iniciante[1:10]\t**");
    printf("\n**\t2-Medio[1:30]\t\t**");
    printf("\n**\t3-Experiente[1:50]\t**");
    printf("\n**********************************");
    printf("\nEscolha:");scanf("%d",&escolha);

    switch (escolha)
    {
        case 1:
                Max=10;
                tentativas=3;
            break;
        case 2:
                Max=30;
                tentativas=10;
            break;
        case 3:
                Max=50;
                tentativas=15;
            break;
        default: printf("\nEscolha nao existe");
            break;
    }

    //expressao geral para gerar numeros aleatórios entre dois máximos
    num = (rand() % (Min - Max + 1)) + Min;

    printf("\nGerado numero entre %d e %d com %d tentativas",Min,Max,tentativas);

    do{
        printf("\nTentativas restantes: %d",tentativas-contador);
        printf("\nResposta: ");scanf("%d",&resposta);

        if(resposta<num)
            printf("\nO numero gerado e maior");
        
        if(resposta>num)
            printf("\nO numero gerado e menor");
        
        if(resposta==num)
            printf("\nAcertou!");
        
        contador++;

    }while(resposta!=num && contador<=tentativas); 
    
    

	
}