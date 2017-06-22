#include <stdio.h>
#include <stdlib.h>

void soma(int *num)
{
	*num = *num+10;
	//no endereco de memoria faco uma soma qualquer e atribuo o resultado
	//naquele endereco de memoria
	printf("A soma mais 10 eh %i\n",*num);
	//exibo o resultado inteiro dentro da funcao
}
int main()
{
 int numero;
 printf("Informe um numero\n");
 scanf("%i",&numero);
 //leio um numero qualquer
 soma(&numero);//passo o endereco de memoria que esta armazenado o numero
 printf("A soma fora da funcao eh: %i\n",numero);
 //como eh o endereco e nao o valor que foi passado como parametro o valor calculado
 //dentro da funcao eh exibido tambem na variavel numero pois eh o mesmo valor
  return 0;
}
