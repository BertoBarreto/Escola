#include <stdio.h>

int bonus(int filhos,int anos);
void guardar(int filhos,int anos,int bonus);

void guardar(int filhos,int anos,int bonus){

    FILE * f;// defininçao de uma variavel associada a um ficheiro

    //f = fopen("teste.txt","w");//criar um ficheiro teste.txt em modo de escrita "w"    
    f = fopen("bonus.txt","a");//criar um fihceiro teste.txt em modo de atualizar sem apagar o anterior

    fprintf(f,"\n*************************************\n**    Nome: Bonus Natal             **\n**    Autor: Roberto Barreto       **\n**    Data: 26/10/2020             **\n*************************************\n");

    fprintf(f,"Filhos:%d\n",filhos);// escrever no ficheiro criado
    fprintf(f,"Anos de serviço:%d\n",anos);
    fprintf(f,"Bónus:%d\n",bonus);

    fclose(f);//fechar o ficheiro pois nao se vai manipular mais o ficheiro

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
    int filhos,anos,total;
    
    printf("*************************************\n**    Nome: Bonus natal             **\n**    Autor: Roberto Barreto       **\n**    Data: 26/10/2020             **\n*************************************\n");
    printf("Introduza o numero de filhos: ");     scanf("%d",&filhos);
    printf("Introduza os anos de servico: ");     scanf("%d",&anos);

    total=bonus(filhos,anos);

    printf("Tera um total de %d euros de bonus de natal",total);

    guardar(filhos,anos,total);

    return 0;
}
