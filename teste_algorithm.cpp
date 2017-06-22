#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	vector<int> vet1, vet2;
	vector<int>::iterator iter1, iter2;

	for(int i = 0; i < 5; i++)
	{
		vet1.push_back(i);
	}
	for(int i = 0; i < 5; i++)
	{
		vet2.push_back(2*i);
	}

	for ( iter1 = vet1.begin( ) ; iter1 < vet1.end( ) ; iter1++ )
	{
		printf("\t%d", *iter1);
	}
	printf("\n");
	for(iter2 =   vet2.begin( ); iter2 !=  vet2.end( ); iter2++)
	{
		printf("\t%d", *iter2);
	}
	
	
	printf("\n");
	bool result1;  
    result1 = lexicographical_compare (vet1.begin( ), vet1.end( ),  vet2.begin( ), vet2.end( ) );  
   if ( result1 )  
      cout << "Vetor 1 eh menor que vet2." << endl;  
   else  
      cout << "Vetor vet1 nao eh menor que vet2." << endl;
	return 0;
}
