#include <stdio.h>
#include <stdlib.h>
int numero[3];
int posicao;

void Exibe()
{
	for (posicao = 0; posicao < 3; posicao++)
	{
		printf("Na posicao %i ", posicao);
		printf(" esta o numero: %i \n", numero[posicao]);

	}
	system("pause");
}

void Ordena()
{
	int troca, chave, contador;
	int qtdTrocas = 0;

	for (posicao = 1; posicao < 3; posicao++)
	{
		chave = numero[posicao];
		contador = posicao - 1;
		while (contador > -1 && numero[contador] > chave)
		{
			qtdTrocas++;
			numero[contador + 1] = numero[contador];
			contador = contador - 1;
			numero[contador + 1] = chave;
		}
	}

	printf("\n Qtd de trocas %i", qtdTrocas);

}

int main()
{
	for (posicao = 0; posicao < 3; posicao++)
	{
		printf("\nInforme o numero da posicao %i ", posicao );
		scanf("%i", &numero[posicao]);
	}


	printf("\n *** Exibe desordenado *** \n");
	Exibe();
	Ordena();
	printf("\n *** Exibe apos ordenacao *** \n");
	Exibe();


}
