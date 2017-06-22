#include <stdio.h>
#include <string.h>
#define lin 5
#define tam 50

char palavras[lin][tam];
int i;
char troca[tam];

void exibir()
{
	for(int i = 0; i < lin; i++)
	{
		printf("%s\n", palavras[i]);
	}
}
void Ordena ()
{
	int contador;
	
	for (i = 1; i < lin; i++)
	{
		strcpy(troca, palavras[i]);
		contador = i - 1;
		while (contador > -1 && strcmp(palavras[contador], troca) > 0)
		{
			strcpy(palavras[contador + 1], palavras[contador]);
			contador = contador - 1;
			strcpy(palavras[contador + 1], troca);
		}
	}
}
int main ()
{
		for (i = 0; i < lin; i++)
	{
		scanf("%s", palavras[i]);
	}


	printf("\n *** Exibe desordenado *** \n");
	exibir();
	Ordena();
	printf("\n *** Exibe apos ordenacao *** \n");
	exibir();
}
