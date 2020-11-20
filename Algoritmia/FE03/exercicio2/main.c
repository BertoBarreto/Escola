#include<stdio.h>

void main(){
    char gen,escolha;
    int idade,gasto=0,gastoTotal=0,count=0,countF=0,countM=0,countFEx=0;
    float media=0.0f;
    while (1)
    {
        printf("Indique seu Genero: ");scanf(" %c",&gen);
        printf("Indique a sua idade: ");scanf("%d",&idade);
        printf("Indique quanto pretende gastar: ");scanf("%d",&gasto);

        if(idade<=0||gasto<0){
            printf("Erro em idade ou gasto, valores nao aceites");
            break;
        }
        if(gen=='F'||gen=='f'){
            countF++;
            
            if(idade>40 && gasto>200)
                countFEx++;
        }else if(gen=='M'||gen=='m')
            countM++;
        else{
            printf("genero errado");
            break;
        }
        
        gastoTotal+=gasto;
        count++;
        printf("Deseja sair(Y/N)? ");scanf(" %c",&escolha);
        if(escolha=='Y'||escolha=='y'){
            break;
        }
        
    }
    printf("\n*************************************************************");
    printf("\n** Quantidade de pessoas do genero feminino: %d\t\t   **",countF);
    printf("\n** \tCom mais de 40 anos e gasto superior a 200euros: %d **",countFEx);
    printf("\n*************************************************************");
    printf("\n** Quantidade de pessoas do genero masculino: %d\t\t   **",countM);
    printf("\n** Media de gasto: %.2f euros\t\t\t   **",(float)gastoTotal/(float)count);
    printf("\n*************************************************************");

}