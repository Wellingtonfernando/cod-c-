#include <stdio.h>
#include <stdlib.h>
int matriz[10][4];
int fileira, cadeira, totalOcupado=0;

void insere()
{//atribui valor zero
	for (int i=0; i<10;i++)
	{
		for (int j=0;j<4;j++)
		{  
			matriz[i][j]=0;
		}
	}
}
void exibe()
{
	printf("Situacao do onibus\n");
	for (int i=0;i<10;i++)
	{
		for (int j=0;j<4;j++)
		{
			printf(" %i", matriz[i][j]);
		}
		printf("\n");
	}
	printf("O total de lugares ocupados eh: %i\n",totalOcupado);
    printf("O total de lugares vazios eh: %i\n",40-totalOcupado);	
}

void ocupaLugar()
{
	if (matriz[fileira][cadeira]==1)
	{
		printf("Lugar ja ocupado !!!\n");
	}
	else
	{
		matriz[fileira][cadeira]=1;
		totalOcupado++;
	}
	
}


int main()
{
 int continua=0;	
 insere();
  while (continua==0)
  {  
  	exibe();
  	printf("Informe a fileira\n");
  	scanf("%i",&fileira);
  	printf("Informe a poltrona\n");
  	scanf("%i",&cadeira);  
  	ocupaLugar();
  	printf("Deseja continuar \n");
  	scanf("%i",&continua);
  	system("cls");
  }
  system("pause");
  return 0;
}
