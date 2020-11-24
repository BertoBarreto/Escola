#include<stdio.h>
#include<string.h>

void main(){

char num[50];

    printf("Introduza m numero: ");gets(num);
    //inverter um vetor
    strrev(num);
        
    printf("O numero invertido e %s",num);
}