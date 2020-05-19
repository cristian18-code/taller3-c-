//(18)Calcular el factorial de un número N (siendo N un número que se lee).
#include<iostream>
using namespace std;

int main()
{
	int numero, factorial = 1;
	cout<<"Programa para calcular el factorial de un numero\n\n";
	cout<<"Digite un numero: ";  cin>>numero; 
	
	cout<<numero<<"! = ";
	for(int i = 1; i <= numero; i++)
	{
		cout<<i<<"*";
		factorial = factorial*i;
	}
	cout<<" = "<<factorial;
	
	return 0;
}
