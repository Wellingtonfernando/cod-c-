#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

struct registro  
{
  char nome[40];
  registro* proximo;
  //armazenara o endereco de memoria onde esta a
  //estrutura anterior               
  //para estrutura o asterisco deve ser colocado do lado direito
} ;
//acima defini uma tipo estrutura chamada registro

typedef registro* ponteiro;
//defino um novo tipo, assim se for criado uma variavel do tipo ponteiro
//ele contera todos os campos da estrutura registro
//para estrutura o asterisco deve ser colocado do lado direito

void Exibe(ponteiro primeiro)
{
 ponteiro aux;
 aux = primeiro;
 while (aux != NULL)
  {
    printf("%s\n", aux->nome);
    aux=aux->proximo;      
  }
}

main() 
{
ponteiro inicio, anterior, auxiliar;
char cliente[40];
char resp='S';
//inicializando a fila
inicio = NULL;
while (resp== 'S')
{
   printf("\nInforme o nome do cliente: \n");
   scanf("%s", cliente);          
   auxiliar = new registro;
   strcpy(auxiliar->nome,cliente);
   auxiliar->proximo = NULL;
      if (inicio == NULL)
      {
         inicio = auxiliar;
         }
      else
      {
        anterior->proximo = auxiliar;
        }
      anterior = auxiliar;
   printf("Informe S para continuar \n ");
   scanf("%s", &resp);
}
Exibe(inicio);  
system("pause");
}    
