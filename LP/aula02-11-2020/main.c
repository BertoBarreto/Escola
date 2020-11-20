#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int bonus(int filhos,int anos);
void guardar(int filhos,int anos,float bonus);
void ler();

void ler(){
    FILE * f;
    int filhos,anos,res,cont=0,somaFilhos=0,somaAnos=0,somaBonus=0;
    float maxBonus=0,total;
    f = fopen("bonus.txt","r");
    //enquanto tiver o que ler, vai ler
    while(!feof(f)){
        res = fscanf(f,"%d;%d;%f\n",&filhos,&anos,&total);
        cont++;
        somaFilhos += filhos;
        somaAnos += anos;
        somaBonus += total;
        if(total>=maxBonus)
            maxBonus=total;

    }
    printf("A media de Filhos e %.2f\n",(float)somaFilhos/cont);
    printf("A media de Anos de servico e %.2f\n",(float)somaAnos/cont);
    printf("A media de Bonus e %.2f euros\n",(float)somaBonus/cont);
    printf("O Bonus maximo e %.2f",maxBonus);

    fclose(f);

}

void lerBin(){
    FILE * f;
    int filhos,anos;
    float bonus;
    //modo rb de ler em modo binario
    f = fopen("dados.bin","rb");
    //enquanto tiver o que ler, vai ler
    while(!feof(f)){
        int r1,r2,r3;
        //fread leitura de binarios
        r1 = fread(&filhos,sizeof(int),1,f);
        r2 = fread(&anos,sizeof(int),1,f);
        r3 = fread(&bonus,sizeof(float),1,f);
        if(r1&&r2&&r3)printf("%d %d %.2f\n",filhos,anos,bonus);
    }
    

    fclose(f);

}

void guardar(int filhos,int anos,float bonus){

    FILE * f;// defininçao de uma variavel associada a um ficheiro

    //f = fopen("teste.txt","w");//criar um ficheiro teste.txt em modo de escrita "w"    
    f = fopen("bonus.txt","a");//criar um fihceiro teste.txt em modo de atualizar sem apagar o anterior


    fprintf(f,"%d;%d;%.2f\n",filhos,anos,bonus);// escrever no ficheiro criado

    fclose(f);//fechar o ficheiro pois nao se vai manipular mais o ficheiro

}

void guardarBin(int filhos, int antiguidade, float bonus)
{FILE * f;
//modo ab de append com modo binario
 f = fopen("dados.bin","ab");
 //guarda em modo binário valores no ficheiro dados.bin
 fwrite(&filhos,sizeof(int),1,f);
 fwrite(&antiguidade,sizeof(int),1,f);
 fwrite(&bonus,sizeof(float),1,f);
 fclose(f);
}

int bonus(int filhos,int anos){
    int bFilhos,bAnos,total;

    bFilhos=20*filhos;
    bAnos=10*anos;
    total=bFilhos+bAnos;

    return(total);
}

int main(int argc, char const *argv[])
{
    int filhos,anos;
    float total;
    
    printf("Introduza o numero de filhos: ");     scanf("%d",&filhos);
    printf("Introduza os anos de servico: ");     scanf("%d",&anos);

    total=bonus(filhos,anos);

    printf("Tera um total de %.2f euros de bonus de natal\n",total);

    guardarBin(filhos,anos,total);
    lerBin();
    return 0;
    
    //guardar(filhos,anos,total);
    //ler();


}
