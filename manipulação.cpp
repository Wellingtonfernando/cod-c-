#include <stdio.h>
#include <string.h>
#include <ctype.h>
char frase[100];
int cont = 0;
int contcaracter ()
{
	 return strlen(frase);
}
int contvogais ()
{
	
	for(int i = 0;i < contcaracter(); i++)
	{
	  	if (toupper(frase[i]) == 'A')
		  {
		  	cont++;
		  }
		  if (toupper(frase[i]) == 'E')
		  {
		  	cont++;
		  }
		  if (toupper(frase[i]) == 'I')
		  {
		  	cont++;
		  }
		  if (toupper(frase[i]) == 'O')
		  {
		  	cont++;
		  }
		  if (toupper(frase[i]) == 'U')
		  {
		  	cont++;
		  }
	}
	return cont;
}
int main()
{
	int qtdvogais;
	printf("digite uma frase: ");
	gets(frase);
	printf("possui %i ",contcaracter());

	printf("\nnumero de vogais %d: ",contvogais());
//	vogalrepete();
	
	return 0;
}