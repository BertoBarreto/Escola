#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
void ler();

void ler(){
    FILE * f;
    int filhos,anos,res;
    float total;
    f = fopen("dados.txt","r");
    while(!feof(f)){
        res = fscanf(f,"%d;%d;%f\n",&filhos,&anos,&total);
        printf("Resultado: %d\n",res);
        printf("%d %d %.2f",filhos,anos,total);
    }
    fclose(f);

}

// Cálculo do bónus a atribuir
float bonusFinal(int filhos, int antiguidade)
{
    return(20*filhos+10*antiguidade);
}

// Armazenamento dos dados em ficheiro de texto
void guardar(int filhos, int antiguidade, float bonus)
{
    FILE * f;
    f = fopen("dados.txt","a");
    fprintf(f,"%d;%d;%.f\n",filhos,antiguidade,bonus);
    fclose(f);
}

void main()
{/*
    int filhos, antiguidade;
    float bonus;
    printf("Filhos?");
    scanf("%d",&filhos);
    printf("Antiguidade?");
    scanf("%d",&antiguidade);
    bonus = bonusFinal(filhos, antiguidade);
    printf("Bonus final: %.f",bonus);
    guardar(filhos, antiguidade, bonus);*/

    ler();
}
