#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//prototipos
float mediaTestes(int teste1,int teste2);
float mediaPratica(int prat1, int prat2, int prat3, int prat4);

//calculo da media de testes recebendo 2 notas e entrega da mesma
float mediaTestes(int teste1, int teste2){
    float media = ((teste1+teste2)/2)*0.7;
    printf("media escrita: %.2f\n",media);
    return(media);
}
//calculo da media pratica recebendo 4 notas e entrega da mesma
float mediaPratica(int prat1, int prat2, int prat3, int prat4){
    float media = ((prat1+prat2+prat3+prat4)/4)*0.3;
    printf("media pratica: %.2f\n",media);
    return(media);
}

void guardar(int t1,int t2,int p1,int p2,int p3,int p4,float nf){
    
    FILE * ficheiro;// defininçao de uma variavel associada a um ficheiro
    //ficheiro = fopen("teste.txt","w");//criar um ficheiro teste.txt em modo de escrita "w"    
    ficheiro = fopen("teste.txt","a");//criar um fihceiro teste.txt em modo de atualizar sem apagar o anterior
    fprintf(ficheiro,"\n*************************************\n**    Nome: Nota Final             **\n**    Autor: Roberto Barreto       **\n**    Data: 26/10/2020             **\n*************************************\n");
    fprintf(ficheiro,"teste1:%d\n",t1);// escrever no ficheiro criado
    fprintf(ficheiro,"teste2:%d\n",t2);
    fprintf(ficheiro,"trabalho1:%d\n",p1);
    fprintf(ficheiro,"trabalho2:%d\n",p2);
    fprintf(ficheiro,"trabalho3:%d\n",p3);
    fprintf(ficheiro,"trabalho4:%d\n",p4);
    fprintf(ficheiro,"Nota Final:%.f\n",nf);

    fclose(ficheiro);//fechar o ficheiro pois nao se vai manipular mais o ficheiro

}

int main(int argc, char const *argv[])
{
    //var tipo t = testes, tipo p = trabalhos praticos
    int t1,t2,p1,p2,p3,p4;
    float media;
    printf("*************************************\n**    Nome: Nota Final             **\n**    Autor: Roberto Barreto       **\n**    Data: 26/10/2020             **\n*************************************\n");
    //introdução das notas
    printf("Introduza a nota do primeiro teste:");      scanf("%d",&t1);

    printf("Introduza a nota do segundo teste:");       scanf("%d",&t2);

    printf("Introduza a nota do primeiro trabalho:");   scanf("%d",&p1);

    printf("Introduza a nota do segundo trabalho:");    scanf("%d",&p2);

    printf("Introduza a nota do terceiro trabalho:");   scanf("%d",&p3);

    printf("Introduza a nota do quarto trabalho:");     scanf("%d",&p4);

    //calculo da media final
    media = mediaPratica(p1,p2,p3,p4)+mediaTestes(t1,t2);
    
    //entrega da media final ao utilizador %.f arredonda valores
    printf("media final: %.2f\n",media);

    guardar(t1,t2,p1,p2,p3,p4,media);

    return 0;
}
