/*********************************
**    Nome: Desenhar Quadrados  **
**    Autor: Roberto Barreto    **
**    Data: 21/11/2020          **
**********************************/

#include<stdio.h>
#include<ctype.h>

void main(){

    int comprimento, largura, escolha, preencher;
    char caracter;

    printf("**************************");
    printf("\n** Menu:\t\t**");
    printf("\n**\t1-Quadrado\t**");
    printf("\n**\t2-Retangulo\t**");
    printf("\n**************************");
    printf("\nEscolha:");scanf("%d",&escolha);
    printf("Deseja preencher?(S/N) ");scanf(" %c",&preencher);
    switch (escolha)
    {
        case 1:
                
                printf("Introduza o lado: ");scanf("%d",&largura);
                printf("Introduza o caracter a ultilizar: ");scanf(" %c",&caracter);
                if(toupper(preencher)=='N'){
                    for(int i=1;i<=largura;i++){
                        if(i==1 || i==largura){
                            for(int a=1;a<=largura;a++){   
                                    printf(" %c",caracter);
                            }
                            printf("\n");
                        }else{
                            for(int a=1;a<=largura;a++){
                                if((a==1) || (a==largura))
                                    printf(" %c",caracter);
                                else
                                    printf("  ");
                            }
                            printf("\n");
                        }

                    }
                }else{
                    for(int i=1;i<=largura;i++){
                        
                        for(int a=1;a<=largura;a++){
                            printf(" %c",caracter);
                        }
                        printf("\n");

                    }
                }
            break; 
        case 2:
                printf("Introduza o comprimento e largura: ");scanf("%d %d",&comprimento,&largura);
                printf("Introduza o caracter a ultilizar: ");scanf(" %c",&caracter);
                if(toupper(preencher)=='N'){
                    for(int i=1;i<=largura;i++){
                        if(i==1 || i==largura){
                            for(int a=1;a<=comprimento;a++){   
                                    printf(" %c",caracter);
                            }
                            printf("\n");
                        }else{
                            for(int a=1;a<=comprimento;a++){
                                if((a==1) || (a==comprimento))
                                    printf(" %c",caracter);
                                else
                                    printf("  ");
                            }
                            printf("\n");
                        }

                    }
                }else{
                    for(int i=1;i<=largura;i++){
                        
                        for(int a=1;a<=comprimento;a++){
                            printf(" %c",caracter);
                        }
                        printf("\n");

                    }
                }
                break;

        default:
                printf("Opcao invalida");
            break;
    }
    

}