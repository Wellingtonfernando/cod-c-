#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct data 
{
	vector<int> dia;
	vector<int> mes;
	vector<int> ano;
};


int main(int argc, char** argv)
{
	data hoje;
	for(int i = 0; i < 5; i++)
	{
		hoje.dia.push_back(2*i);
		hoje.mes.push_back(i);
		hoje.ano.push_back(3*i);
		
	}
	
	//exibe os vetore dia, mes e ano
	printf("vetor dia\n");
	for(int i = 0; i < hoje.dia.size(); i++)
	{
		printf("\t%d",hoje.dia[i]);
	}
	printf("\nvetor mes\n");
	for(int i = 0; i < hoje.mes.size(); i++)
	{
		printf("\t%d",hoje.mes[i]);
	}
	printf("\nvetor ano\n");
	for(int i = 0; i < hoje.ano.size(); i++)
	{
		printf("\t%d",hoje.ano[i]);
	}
	printf("\n\n");
	
	
	bool maior_vetor;
	//verifica qual dos vetores é o maior
	maior_vetor = lexicographical_compare(hoje.dia.begin(), hoje.dia.end(), hoje.mes.begin(), hoje.mes.end());
	if(maior_vetor)
	{
		printf("\nvetor mes eh maior que vetor dia");
		maior_vetor = lexicographical_compare(hoje.mes.begin(), hoje.mes.end(), hoje.ano.begin(), hoje.ano.end());
		if(maior_vetor)
		{
			printf(" e menor que vetor ano\n");
		}
		else
		{
			printf(" e maior que vetor ano\n");
		}
	}
	else
	{
		printf("\nvetor dia eh maior que vetor mes");
		maior_vetor = lexicographical_compare(hoje.dia.begin(), hoje.dia.end(), hoje.ano.begin(), hoje.ano.end());
		if (maior_vetor)
		{
			printf(" e menor que ano\n");
		}
		else
		{
			printf(" e mairo que ano\n");
		}
	}
	
	//procura um numero no vetor
	
//	bool aux;	aux = binary_search();
	return 0;
}