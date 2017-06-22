#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
struct tbprodutos
{
	int id;
	char descricao[50];
	float valor;
};
struct tbcliente
{
	int codigo;
	char nome[20];
	char bairro[20];
	char cidade[20];
	char telefone[10];
};
tbprodutos tabela[10];
tbcliente cliente[10];

int main(int argc, char** argv)
{
	for(int i = 0; i < 2; i++)
	{
		printf("digite a ID: ");
		scanf("%d", &tabela[i].id);
		printf("digite a descricao do prod: ");
		fflush(stdin);
		gets(tabela[i].descricao);
		printf("digite o valor do prod: ");
		scanf("%f", &tabela[i].valor);
		printf("\n");
	}
	printf("\nPreencha a tabela clientes\n");
	for(int i = 0; i < 2; i++)
	{
		printf("digite o codigo: ");
		scanf("%d", &cliente[i].codigo);
		
		printf("digite o nome do cliente: ");
		fflush(stdin);
		gets(cliente[i].nome);
		
		printf("digite o nome do bairro: ");
		fflush(stdin);
		gets(cliente[i].bairro);
		
		printf("digite o nome da cidade ");
		fflush(stdin);
		gets(cliente[i].cidade);
		
		printf("digite numero de telefone: ");
		fflush(stdin);
		gets(cliente[i].telefone);
		printf("\n");
	}
	printf("\n\tid  descricao valor\n");
	for(int i = 0; i < 2; i++)
	{
		printf("\t%d", tabela[i].id);
		printf("\t%s", tabela[i].descricao);
		printf("\t%.2f", tabela[i].valor);
		printf("\n");
	}
	printf("\n\tcodigo  nome  bairro  cidade telefone\n");
	for(int i = 0; i < 2; i++)
	{
		printf("\t%d", cliente[i].codigo);
		printf("\t%s", cliente[i].nome);
		printf("\t%s", cliente[i].bairro);
		printf("\t%s", cliente[i].cidade);
		printf("\t%s", cliente[i].telefone);
	}
	system("pause");
	return 0;
}
