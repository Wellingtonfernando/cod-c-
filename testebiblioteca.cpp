#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector <int> vet1, vet2;
	vector<int>::iterator iter;
	
	for(int i = 0; i < 10; i++)
	{
		vet1.push_back(5*i);
	}
	for(int i = 0; i < 5; i++)
	{
		vet2.push_back(7*i);
	}
	
	bool Result,result2;
	
	 Result = lexicographical_compare(vet1.begin(), vet1.end(), vet2.begin(), vet2.end());
	 
	 if(Result)
	 {
	 	printf("Vetor 1 eh menor que vetor 2.");
	 }
	 else
	 {
		 printf("vetor 1 eh maior que vetor 2");
	 }
	 
     iter = binary_search (vet1.begin(), vet1.end(), 5);
	 
	 if(*iter == 5)
	 {
	 	printf("");
	 }
	return 0;
}