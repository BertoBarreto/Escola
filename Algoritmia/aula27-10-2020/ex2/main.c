#include<stdio.h>

int main(int argc, char const *argv[])
{
    char nome[]="antónio";
    int idade = 22;
    float altura = 1.65f;
    char cartaConducao = 0;
    char consegueConduzir;

    consegueConduzir = (altura>=1.5f)&&((idade>=22)||(cartaConducao!=0));
    printf("O %s consegue conduzir?: %d",nome,consegueConduzir);
    return 0;
}
