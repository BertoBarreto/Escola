/********************************\
**    Nome: tempo real em seg   **
**    Autor: Roberto Barreto    **
**    Data: 24/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int horas,minutos,segundos,total,horasToSec,minutosToSec;
    //ir buscar as horas
    printf("introduza as horas: ");
    scanf("%d", &horas);
    printf("introduza os minutos: ");
    scanf("%d", &minutos);
    printf("introduza os segundos: ");
    scanf("%d", &segundos);

    //calcular horas em segundos
    horasToSec=horas*3600;
    //calcular minutos em segundos
    minutosToSec=minutos*60;
    //calcular o total de segundos
    total=horasToSec+minutosToSec+segundos;
    
    //apresentar o total ao utilizador
    printf("A sua hora e %d:%d:%d que e %d segundos", horas,minutos,segundos,total);

    return 0;
}
