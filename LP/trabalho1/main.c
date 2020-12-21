/*****************************************************************
**    Nome: Exemplo nome		                                **
**    Autor: Roberto Barreto\Henrique Cartucho\Vincent Rebena	**
**    Data: 18/12/2020			                                **
****************************************************************/

#include <stdio.h>
#include <string.h>

typedef struct infoPiloto
{
    int num;
    char nome[50];
    char carro[50];
} PILOTO;

typedef struct infoProva
{
    int pos;
    PILOTO piloto;
    int tempoProva;
} PROVA;

typedef struct infoEtapas
{
    int num;
    char etapaI[1]; //Etapa inicial
    char etapaF[1]; //Etapa Final
    int tempo;
} ETAPAS;

void colocarPilotos(PILOTO *ptr);
void guardarPilotos(PILOTO piloto);
void mostrarPilotos(PILOTO *pilotos[]);

void colocarPilotos(PILOTO *ptr)
{
    fflush(stdin);
    printf("Qual o Numero       :");
    scanf("%d", &ptr->num);
    fflush(stdin);
    printf("Qual o Nome         :");
    scanf(" %s", ptr->nome);
    printf("Qual o Carro        :");
    fflush(stdin);
    scanf(" %s", ptr->carro);
    guardarPilotos(*ptr);
}

void guardarPilotos(PILOTO piloto)
{

    FILE *f; // defininçao de uma variavel associada a um ficheiro

    //f = fopen("teste.txt","w");//criar um ficheiro teste.txt em modo de escrita "w"
    f = fopen("pilotos.txt", "a"); //criar um ficheiro teste.txt em modo de atualizar sem apagar o anterior

    fprintf(f, "%d;%s;%s\n", piloto.num, piloto.nome, piloto.carro); // escrever no ficheiro criado

    fclose(f); //fechar o ficheiro pois nao se vai manipular mais o ficheiro
}

void mostrarPilotos(PILOTO *pilotos[])
{
    FILE *f;
    int res, num, i = 0;
    char nome[50], carro[50], string[50], caracter;
    f = fopen("pilotos.txt", "r");
    //colocar aqui para ler o primeiro valor e não repetir o valor final
    res = fscanf(f, "%d;%s;%s\n", &num, &string);
    //enquanto tiver o que ler, vai ler
    while (res != EOF)
    {
        //separar a string por ;
        char *ptr = strtok(string, ";");
        strcpy(nome, ptr);

        //como sempre que a função strtok encontra um delimitador ela substitui por \0
        //entao sempre que se separa a string temos de partir do \0 ou NULL
        //EX:Roberto;Mustang | Roberto\0Mustang
        ptr = strtok(NULL, ";");
        strcpy(carro, ptr);

        printf("\nNumero \t:%d", num);
        printf("\nNome \t:%s", nome);
        printf("\nCarro \t:%s\n", carro);

        pilotos[i]->num = num;
        strcpy(pilotos[i]->nome, nome);
        strcpy(pilotos[i]->carro, carro);

        res = fscanf(f, "%d;%s;%s\n", &num, &string);
        i++;
    }
    fclose(f);
}

void menu(PILOTO *pilotos, int n, int nE)
{
    int escolha;

    printf("\n**************************");
    printf("\n** 1 - Colocar pilotos\t**");
    printf("\n** 2 - Mostar pilotos\t**");
    printf("\n** 3 - Colocar Etapas\t**");
    printf("\n** 4 - Mostar Etapas\t**");
    printf("\n** 5 - Colocar Provas\t**");
    printf("\n** 6 - Mostar Provas\t**");
    printf("\n** 7 - Sair\t\t**");
    printf("\n**************************");
    printf("\n escolha: ");
    scanf("%d", &escolha);
    if (escolha != 7)
    {
        switch (escolha)
        {
        //!verificar se é numero ou string
        case 1:
            for (int i = 0; i <= n; i++)
                colocarPilotos(&pilotos[i]);
            break;
        case 2:
            mostrarPilotos(&pilotos);
            break;
        default:
            printf("Opcao invalida");
        }
        menu(pilotos, n, nE);
    }
    else
    {
        return;
    }
}
void main()
{
    int n, nE; //n-> nº pilotos,nE->nº Etapas
    PILOTO pilotos[n];
    ETAPAS etapas[nE];
    PROVA provas[n];
    load(pilotos);
    puts("Quantidade de pilotos: ");
    scanf("%d", &n);
    n--;
    puts("Quantidade de Etapas: ");
    scanf("%d", &nE);
    nE--;
    menu(pilotos, n, nE);
}