/********************************\
**    Nome: Nota                **
**    Autor: Roberto Barreto    **
**    Data: 01/10/2020          **
\********************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float t1,t2,media,notaF;

    printf("Introduza as duas notas: ");scanf("%f %f",&t1,&t2);

    if(t1>=8.5 && t2>=9){
        media = (t1+t2)/2;
        if(media>=10){
            if(media>=17){
                printf("Introduza a nota Final, caso o aluno nao tenha comparecido coloque 0");scanf("%f",&notaF);
                if(notaF!=0){
                    printf("A nota final e %.2f",notaF);
                }else
                {
                    printf("A nota final e %.2f",media);
                }
                
            }else{
                printf("A nota final e %.2f",media);
            }
        }else{
            printf("Nao possui media suficiente");
        }
    }else{
        printf("Nao possui notas minimas");
    }

    return 0;
}
