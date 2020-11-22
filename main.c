#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#define MAX_PRODUTOS 100

float preco_peca[MAX_PRODUTOS], novo_preco;
int quant_stock[MAX_PRODUTOS], novo_stock = 0, id_peca[MAX_PRODUTOS], cat_identificador[MAX_PRODUTOS];
int total_peca = 0, soma_stock = 0, soma_venda = 0, i = 0, escolha = 0, peca = 0, x = 0;
char cat_peca[MAX_PRODUTOS];
char escolha_cat;
//Venda
float preco_venda[MAX_PRODUTOS];
int vender_peca = 0, quant_venda = 0, stock_vendido[MAX_PRODUTOS], id_pecavendida[MAX_PRODUTOS];
char cat_vendida[MAX_PRODUTOS];
int ano;

//peça mais cara
int id_travoes = 0, id_suspensao = 0, id_motor = 0, id_filtro = 0, id_eq_interior = 0;
int quant_travoes = 0, quant_suspensao = 0, quant_motor = 0, quant_filtro = 0, quant_eq_interior = 0, ano_venda[4];
float maior_travoes = 0, maior_suspensao = 0, maior_motor = 0, maior_filtro = 0, maior_eq_interior = 0;
float preco=0.0f;

void limpar()
{
	getch();
	fflush(stdin);
	system("cls");
}

void categorias(char letra)
{
	switch (letra)
	{
	case 't':
	case 'T':
		printf("Travões\n");
		break;
	case 's':
	case 'S':
		printf("Suspensão\n");
		break;
	case 'm':
	case 'M':
		printf("Motor\n");
		break;
	case 'f':
	case 'F':
		printf("Filtro\n");
		break;
	case 'e':
	case 'E':
		printf("Equipamento Interior\n");
		break;
	default:
		printf("Categoria Incorrecto\n");
	}
}

int opcoes()
{

	setlocale(LC_ALL, "portuguese");
	while (1)
	{

		do
		{

			printf("\n Escolhe uma opcao");
			printf("\n 1- Registar novas pecas;");
			printf("\n 2- Alterar o preco de uma peca;");
			printf("\n 3- Alterar o stock de uma peca;");
			printf("\n 4- Listar a informacao de todas as pecas disponiveis;");
			printf("\n 5- Listar a informacao de todas as pecas;");
			printf("\n 6- Listar a informacao de uma peca;");
			printf("\n 7- Quantidade de pecas em stock;");
			printf("\n 8- Valor total do stock da oficina;");
			printf("\n 9- Registar uma venda de uma peca;");
			printf("\n 10- Pecas vendidas (ano);");
			printf("\n 11- Total de pecas vendidas e o valor de pecas;");
			printf("\n 12- Todas as pecas vendidas de uma data categoria;");
			printf("\n 13- Quantidade vendida de uma certa peca;");
			printf("\n 14- Informacao da peca mais cara (por categoria);");
			printf("\n----------------------------------------------------------");
			printf("\n\tSeleciona uma opcao: ");
			scanf("%d", &escolha);
			limpar();
			return escolha;
		} while (escolha < 1 || escolha > 14);
	}
}

void funcoes(int escolha, int ano)
{
	setlocale(LC_ALL, "portuguese");

	switch (escolha)

	{
	case 1:
		printf("\tRegistar novas pecas\n");
		printf("Quantas peças deseja criar? ");
		int nova_quantidade;
		scanf("%d", &nova_quantidade);
		for (i = 0; i < nova_quantidade; i++)
		{
			if (nova_quantidade > 1)
				printf("(%d/%d) Criação da %dº peça:\n", i + 1, nova_quantidade, i + 1);
			printf("Número identificador da peça: ");
			scanf("%d", &id_peca[total_peca]);
			printf("Custo da peça(em euros): ");
			scanf("%f", &preco_peca[total_peca]);
            printf("Quantidade em stock de peças: ");
			scanf("%d", &quant_stock[total_peca]);
			printf("\n\tCategoria: \n");
			printf("Travões(t/T)\n");
			printf("Suspensão(s/S)\n");
			printf("Motor(m/M)\n");
			printf("Equipamento Interior(e/E)\n");
			printf("Escolha uma categoria: ");
			scanf(" %c", &cat_peca[total_peca]);
			categorias(cat_peca[total_peca]);
			peca += 1;
			total_peca++;
		}
		limpar();
		break;
	case 2:
		printf("\tAlterar o preco de uma peca\n");
		printf("\nIntroduza o identificador da peca para mudar o preco: ");
		scanf("%d",&x);
		/*for (; x < MAX_PRODUTOS; x++)
		{
			if (id_peca[x] == i)
			{
				break;
			}
		}*/
		//printf("%d", x);
		printf("\nIntroduza o preco da peca (Preco Atual- %2.f): ", preco_peca[x]);
		scanf("%f", &preco_peca[x]);
		printf("\nPreco modificado com sucesso.");
		limpar();
		break;

	case 3:
		printf("\tAlterar o stock de uma peca\n");
		printf("\nIntroduza o identificador da peca para mudar a quantidade em stock: ");
		scanf("%d", &i);
		printf("\nIntroduza o atual stock da peca (Stock Atual- %i): ", quant_stock[x]);
		scanf("%d", &novo_stock);
		quant_stock[x] = novo_stock;
		printf("\nStock modificado com sucesso");
		limpar();
		break;

	case 4:
		printf("\tListar de informacao de todas as pecas disponiveis\n");
		printf("Numero identificador unico da peca | Custo da peca (euros) | Quantidade disponivel em stock | Categoria\n\n");
		for (i = 0; i < peca; i++)
		{
			if (quant_stock[i] > 0)
			{
				printf("          %d          | ", id_peca[i]);
				printf("          %.2f        | ", preco_peca[i]);
				printf("          %d          | ", quant_stock[i]);
				printf("          %c          \n", cat_peca[i]);
			}
		}
		limpar();
		break;

	case 5:
		printf("\tListar a informacao de todas as peças\n");
		printf("Numero identificador unico da peca | Custo da peca (euros) | Quantidade disponivel em stock | Categoria\n\n");
		for (i = 0; i < peca; i++)
		{
			printf("          %d          | ", id_peca[i]);
			printf("          %.2f        | ", preco_peca[i]);
			printf("          %d          | ", quant_stock[i]);
			printf("          %c          \n", cat_peca[i]);
		}
		limpar();

		break;

	case 6:
		printf("\tListar a informacao de uma peça\n");
		printf("\n\tInsira o numero identificador da peça: ");
		scanf("%d", &x);
		printf("Numero identificador unico da peca | Custo da peca (euros) | Quantidade disponivel em stock | Categoria\n\n");
		printf("          %d          | ", id_peca[x]);
		printf("          %.2f        | ", preco_peca[x]);
		printf("          %d          | ", quant_stock[x]);
		printf("          %c          \n", cat_peca[x]);
		limpar();
		break;
	case 7:
		printf("\tQuantidade de pecas em stock\n");
		printf("Numero identificador unico da peca | Quantidade disponivel em stock\n\n");
		for (i = 0; i < peca; i++)
		{
			printf("          %d          | ", id_peca[i]);
			printf("          %d            ", quant_stock[i]);
		}
		limpar();

		break;

	case 8:
		printf("\tValor total do stock da oficina\n");
		for (x = 0; x < peca; x++)
		{
			soma_stock += quant_stock[x];
		}
		printf("Total: %d", soma_stock);
		limpar();
		break;

	case 9:
		printf("\tRegistar uma venda de uma peca\n");
		ano_venda[4] = ano;

		printf("Insira o numero identificador da peça para vender:");
		scanf("%d", &x);
		printf("Quantidade da peça em stock: %d", quant_stock[x]);
		printf("\nIntroduza a quantidade da peça que deseja vender: ");
		scanf("%d", &vender_peca);
		//remover peca
		quant_stock[x] = quant_stock[x] - vender_peca;

		//criarVenda
		stock_vendido[quant_venda] = vender_peca;
		preco_venda[quant_venda] = vender_peca * preco_peca[i];
		cat_vendida[quant_venda] = cat_peca[i];
		id_pecavendida[quant_venda] = quant_venda;
		quant_venda++;
		limpar();
		break;

	case 10:
		printf("\tPecas vendidas (ano)\n");
		printf("Indique o ano que deseja verificar: \n");
		scanf("%d", &ano);
		printf("ID da peça vendida | Preço da venda(euros) | Quantidade vendida | Categoria\n\n");

		/*for (i = 0; i < peca; i++)
		{
			if (stock_vendido[i] > 0)
			{
				printf("          %d          | ", id_pecavendida[i]);
				printf("          %.2f        | ", preco_venda[i]);
				printf("          %d          | ", stock_vendido[i]);
				printf("          %c          \n", cat_vendida[i]);
			}
		}*/
        for (i = 0; i < peca; i++)
		{
			if (stock_vendido[i] > 0)
			{
				printf("          %d          | ", id_peca[i]);
				printf("          %.2f        | ", preco_peca[i]);
				printf("          %d          | ", stock_vendido[i]);
				printf("          %c          \n", cat_vendida[i]);
			}
		}

		limpar();
		break;
	case 11:
		printf("\tTotal de pecas vendidas e o valor de pecas\n");

		printf("ID da peça vendida | Preço da venda(euros) | Quantidade vendida \n\n");
		for (i = 0; i < peca; i++)
		{
			if (stock_vendido[i] > 0)
			{
				printf("          %d          | ", id_peca[i]);
				printf("          %.2f        | ", preco_peca[i]);
				printf("          %d          | ", stock_vendido[i]);
			}
		}
		limpar();
		break;

	case 12:
		printf("\tTodas as pecas vendidas de uma dada categoria\n");
		printf("Indica qual a categoria vendida que deseja verificar:");scanf("%s",cat_vendida);
		printf("ID da peça vendida | Quantidade vendida | Categoria\n\n");
		for (i = 0; i < peca; i++)
		{
			if (stock_vendido[i] > 0)
			{
				printf("          %d          | ", id_peca[i]);
				printf("          %.2f        | ", preco_peca[i]);
				printf("          %d          | ", stock_vendido[i]);
				printf("          %c          \n", cat_vendida[i]);
			}
		}
		limpar();
		break;

	case 13:
		printf("\tQuantidade vendida de uma certa peca\n");
		printf("Insira o numero identificador da peça que deseja verificar:");
		scanf("%d", &x);
		for (x = 0; x < peca; x++)
		{
			soma_venda += stock_vendido[x];
		}
		printf("Total: %d", soma_venda);
		limpar();
		break;

	case 14:
		printf("\tInformacao da peca mais cara (por categoria)\n");
			for (i = 0; i <= MAX_PRODUTOS; i++){
                
                switch(cat_peca[i]){
                    case 't':
                        if(maior_travoes < preco_peca[i]){
                            maior_travoes = preco_peca[i];
                            id_travoes = id_peca[i];
                            quant_travoes = quant_stock[i];
                        }
                    break;
                    case 'f':
                        if(maior_filtro < preco_peca[i]){
                            maior_filtro = preco_peca[i];
                            id_filtro = id_peca[i];
                            quant_filtro = quant_stock[i];
                        }
                    break;
                    case 'm':
                        if(maior_motor < preco_peca[i]){
                    
                            maior_motor = preco_peca[i];
                            id_motor = id_peca[i];
                            quant_motor = quant_stock[i];
                        }
                    break;
                    case 's':
                        if(maior_suspensao < preco_peca[i]){
                    
                            maior_suspensao = preco_peca[i];
                            id_suspensao = id_peca[i];
                            quant_suspensao = quant_stock[i];
                        }
                    break;
                    case 'e':
                        if(maior_eq_interior< preco_peca[i]){
                            maior_eq_interior = preco_peca[i];
                            id_eq_interior = id_peca[i];
                            quant_eq_interior = quant_stock[i];
                        }
                    break;
                }
				
			}


		printf("\n\tInformacao das pecas mais caras (p/categoria):");
		printf("\n Travoes--> ID:%i || Quantidade:%i ||Preço: %.2feuros", id_travoes, quant_travoes, maior_travoes);
		printf("\n Filtros--> ID:%i || Quantidade:%i ||Preço: %.2feuros", id_filtro, quant_filtro, maior_filtro);
		printf("\n Motor--> ID:%i || Quantidade:%i ||Preço: %.2feuros", id_motor, quant_motor, maior_motor);
		printf("\n Suspesao--> ID:%i || Quantidade:%i ||Preço: %.2feuros", id_suspensao, quant_suspensao, maior_suspensao);
		printf("\n Equipamento Interior--> ID:%i || Quantidade:%i ||Preço: %.2feuros", id_eq_interior, quant_eq_interior, maior_eq_interior);
		limpar();
		break;
	default:
		printf("Valor invalido\n");
	}
}

void main()
{
	//data de venda
	time_t rawtime;
	struct tm *timeinfo;
	char data[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(data, 80,"%Y", timeinfo);
	ano = atoi(data);
	printf("%d\n", ano);
	while (1)
	{
		funcoes(opcoes(), ano);
	}
}