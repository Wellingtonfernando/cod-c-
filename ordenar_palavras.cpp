#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define lin 3
#define tam 50

char palavras[lin][tam];
char troca[tam];

void inserir ()
{
	for(int i = 0; i < lin; i++)
	{
		scanf("%s",palavras[i]);
	}
}
void exibir ()
{
	for(int i = 0; i < lin; i++)
	{
		printf("\n%s",palavras[i]);
	}
}
void ordenar ()

{
	for(int i = 0; i < lin-1; i++)
	{
	 if(strcmp(palavras[i], palavras[i+1]) > 0)
	 {
	 	strcpy(troca, palavras[i]);
        strcpy(palavras[i], palavras[i+1]);
        strcpy(palavras[i+1], troca);
	 }
	}
}

int main()
{
	inserir();
	
	ordenar();
	
	exibir();
	
	
	return 0;
}