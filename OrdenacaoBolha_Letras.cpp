#include <stdio.h>
#include <stdlib.h>
char letras[3];
int posicao;

void Exibe()
{
 for (posicao=0;posicao <3;posicao++)
 {
  printf("Na posicao %i %s %c \n", posicao, "esta a letra: ", letras[posicao]);
 }    
  system("pause");      
}

void Ordena()
{
   char troca;
   int qtdTrocas=0;
   bool valida=false;
   posicao = 0;
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
 printf("\n Qtd de trocas %i", qtdTrocas);    
     
}

int main() 
{
 for (posicao=0;posicao <3;posicao++)
 {
  printf("\nInforme a letra da posicao %i ", posicao );
  fflush(stdin);
  scanf("%c",&letras[posicao]);   
 }    
 
 
printf("\n *** Exibe desordenado *** \n");
Exibe();
Ordena(); 
printf("\n *** Exibe apos ordenacao *** \n");
Exibe();

 
}
