#include <stdio.h>
int numero[] = {6,22,4,10,2,15};
char letras[] = {'d','c','b'};
int qtdTrocas=0;
void Ordena()
{
   int troca;
   bool valida=false;
   int posicao = 0;
   do
   {
     valida=false;
     for (posicao=0; posicao <5;posicao++)
     {
         if (numero[posicao]>numero[posicao+1])
         {     
		  qtdTrocas++;                          
          troca = numero[posicao];
          numero[posicao] = numero[posicao+1];          
          numero[posicao+1] = troca;                    
          valida=true;
         }
     }    
   }while (valida == true);
    
}
void ordenaletras ()
{
   int troca;
   bool valida=false;
   int posicao = 0;
   do
   {
     valida=false;
     for (posicao=0; posicao <2;posicao++)
     {
         if (letras[posicao]>letras[posicao+1])
         {     
		  qtdTrocas++;                          
          troca = letras[posicao];
          letras[posicao] = letras[posicao+1];          
          letras[posicao+1] = troca;                    
          valida=true;
         }
     }    
   }while (valida == true);
}
int main()
{
	printf("vetor desordenado\n");
	for(int i = 0; i < 6; i++)
	{
		printf("\t %i",numero[i]);
	}
	Ordena();
	printf("\nvetor ordenado\n");
	for(int i = 0; i < 6; i++)
	{
		printf("\t %i",numero[i]);
	}
    printf("\n\nqtd trocas: %d\n", qtdTrocas);
  
  
  
    printf("\n desordenadas\n");
	for(int i = 0; i < 3; i++)
	{
		printf("\t %c",letras[i]);
	}
	
	ordenaletras();
	printf("\npalavras ordenadas\n");
	for(int i = 0; i < 3; i++)
	{
		printf("\t %c",letras[i]);
	}
    
	return 0;
}
