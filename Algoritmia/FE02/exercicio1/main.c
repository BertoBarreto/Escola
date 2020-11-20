#include<stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    printf("intruduza a idade: ");scanf("%d",&idade);
    //verificar se a idade e maior que 30, se for vamos incrementar 10 valores
    if(idade>30)
        idade+= 10;
    
    printf("A idade final e: %d", idade);
    return 0;
}


