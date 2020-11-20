#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char nome[20];
    int idade, maioridade;
    char maior;

    strcpy(nome,"Manuel");
    idade=19;
    maioridade=18;

    maior = idade>=maioridade;
    
    printf("O %s e maior de idade?: %d",nome,maior);

    return 0;
}
