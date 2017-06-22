#include <stdio.h>


void mdc (int n1, int n2)
{
	if(n1 % n2 == 0 and n2 % n2 == 0)
	{
		printf("mdc ==: %d",n2);
	}
	else
	{
		mdc(n1, n2--);	
	}
}

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	mdc(n1, n2);
	return 0;
}
